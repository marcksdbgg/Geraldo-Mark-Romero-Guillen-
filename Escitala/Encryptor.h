//
// Created by marck on 8/04/2021.
//

#pragma once
using namespace std;
#include <string>

class encryptor{
    private:
        int clave[2]={0,1};
    public:
        encryptor(int,int);
        string encrypted(string &);
        string decrypted(string &);
};

