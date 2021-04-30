//
// Created by marcposition on 7/04/2021.
//
#include <string>
#include <vector>
#include "Encryptor.h"

encryptor::encryptor(int a){
    clave = a;
}

string encryptor::encrypted(string& ms){
    string ms_cifrado;
    int aux_1=clave, aux_2=1, aux_3;
    int constante;
    int cont;
    for (int i = 0; i < clave; ++i) {
        cont=0;
        for (int j = i; j < ms.length(); j+=constante) {
            if(cont%2==0){
                aux_3=aux_1;
            }else{
                aux_3=aux_2;
            }
            if (aux_3==1){
                aux_3=clave;
            }
            constante=aux_3*2-2;
            cont++;
            ms_cifrado+=ms[j];
        }
        aux_1--;
        aux_2++;
    }
    return ms_cifrado;
}

string encryptor::ms(string& ms) {
    string ms_decifrado;
    int aux_1=clave,aux_2=1,aux_3;
    int constante;
    int cont;
    int position=0;
    vector<char>x(ms.length());
    for (int i = 0; i < clave; ++i) {
        cont=0;
        for (int j = i; j < ms.length(); j+=constante){
            if(cont%2==0){
                aux_3=aux_1;
            }else{
                aux_3=aux_2;
            }
            if (aux_3==1){
                aux_3=clave;
            }
            constante=aux_3*2-2;
            cont++;
            x[j]=ms[position];
            position++;
        }
        aux_1--;
        aux_2++;
    }
    for (char i : x ){
        ms_decifrado+=i;
    }
    return ms_decifrado;
}
