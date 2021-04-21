//
// Created by marck on 21/04/2021.
//

#include "Encryptor.h"

encryptor::encryptor(int key){
    clave = key;
}

int encryptor::modulo(int a, int n) {
    int r=a-n*(a/n);
    r=r+(r<0)*n;
    return r;
}

string encryptor::decrypted(string &ms) {
    string ms_decifrado;
    for(int i=0;i<ms.length();++i){
        if(ms[i]==' '){
            ms_decifrado+=" ";
        }else{
            int pos=alf.find(ms[i]);
            if(pos<clave){
                int pos_ex=modulo(pos-clave,26);
                ms_decifrado+=alf[pos_ex];
            } else{
                ms_decifrado+=alf[pos-clave];
            }
        }
    }
    return ms_decifrado;
}