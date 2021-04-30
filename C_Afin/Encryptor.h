//
// Created by marck on 30/04/2021.
//

#pragma once
#include <iostream>
#include <string>
using namespace std;

class encryptor {
private:

    int clave_a;
    int clave_b;
    int mod(int, int);
    int Euclid(int , int);

public:
    encryptor(int, int);
    int Euclid_extended(int, int);
    string alf ="abcdefghijklmnopqrstuvwxyz";
    string encrypted(string);
    string decrypted(string);
};



