//
// Created by marck on 8/04/2021.
//

#include "Encryptor.h"
using namespace std;

encryptor::encryptor(int i, int j) {
    clave[0]=i;
    clave[1]=j;
}

string encryptor::encrypted(string &ms){
    string ms_encrypted;
    for(int i = 0; i < clave[1]; ++i){
        for(int j = i; j < clave[1]*clave[0]; j+=clave[1]){
            if(j < ms.length()){
                ms_encrypted += ms[j];
            } else {
                ms_encrypted += " ";
            }
        }
    }
    return ms_encrypted;
}

string encryptor::decrypted(string &ms){
    string ms_decrypted;
    for(int i = 0; i < clave[0]; ++i){
        for(int j = i; j < clave[1]*clave[0]; j+=clave[1]){
            if(j < ms.length()) {
                ms_decrypted += ms[j];
            }
        }
    }
    return ms_decrypted;
}

