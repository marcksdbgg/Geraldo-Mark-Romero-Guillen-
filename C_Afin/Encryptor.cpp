//
// Created by marck on 30/04/2021.
//

#include "Encryptor.h"

encryptor::encryptor(int a, int b) {
    clave_a = a;
    clave_b = b;
}

int encryptor::mod(int a, int b) {
    int r = a - b * (a / b);
    r = r + (r < 0) * b;
    return r;
}

int encryptor::Euclid(int a, int b){
    if (mod(a, b) == 0){
        return b;
    }else{
        int aux = b;
        b = mod(a, b);
        a = aux;
        Euclid(a,b);
    }
}


int encryptor::Euclid_extended(int a, int b) {
    int cont = 0;
    int aux_1 = a;
    int aux_2 = b;
    while (mod(a, b) != 0) {
        int aux = b;
        b = mod(a, b);
        a = aux;
        cont++;
    }
    cont = cont + 2;
    int arr[cont];
    arr[0] = aux_1;
    arr[1] = aux_2;

    int x[cont], y[cont], z[cont];
    y[0] = 1, y[1] = 0, z[0] = 0, z[1] = 1;
    for (int i = 1;; ++i) {
        x[i + 1] = arr[i - 1] / arr[i];
        arr[i + 1] = arr[i - 1] - (x[i + 1] * arr[i]);
        y[i + 1] = y[i - 1] - (x[i + 1] * y[i]);
        z[i + 1] = z[i - 1] - (x[i + 1] * z[i]);
        if (arr[i + 1] == 0) {
            return mod(y[i], arr[1]);
        }
    }
}

string encryptor::encrypted(string ms) {
    string ms_cifrado;
    while (Euclid(clave_a, alf.size()) != 1){
        clave_a = rand();
    }
    cout<<"Clave a = "<<clave_a<<endl;
    cout<<"Clave b = "<<clave_b<<endl<<endl;
    for (char m : ms) {
        ms_cifrado.push_back(alf[mod( (clave_a*(alf.find(m)))+clave_b,alf.size())]);
    }
    return ms_cifrado;
}

string encryptor::decrypted(string ms) {
    string ms_decifrado;
    clave_a = Euclid_extended(clave_a, alf.size());
    for (char m : ms) {
        ms_decifrado.push_back(alf[mod(clave_a*(alf.find(m)-clave_b), alf.size())]);
    }
    return ms_decifrado;
}
