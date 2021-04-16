//
// Created by marck on 15/04/2021.
//

#pragma once
using namespace std;
#include <string>;

class encryptor{
    private:
        int clave;
    public:
        string alf={"abcdefghijklmnopqrstuvwxyz"};
        encryptor(int);
        int modulo(int,int);
        string encrypted(string&);
        string decrypted(string&);

};
