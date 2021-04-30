#include <iostream>
#include <time.h>
#include "Encryptor.h"

int main(){
    srand(time(NULL));
    int clave_a = 1+rand()%(101-1);
    int clave_b = 1+rand()%(101-1);
    string ms = "supercalifragilisticoespialidoso";
    string aux;
    encryptor user(clave_a, clave_b);
    ms = user.encrypted(ms);
    cout << "Mensje cifrado:" << endl << ms << endl;
    aux = user.decrypted(ms);
    cout<<"Mensje decifrado:" << endl << aux << endl;
}