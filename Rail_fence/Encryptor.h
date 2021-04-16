#pragma once
#include <string>
using namespace std;
class encryptor{
private:
    int clave;
public:
    encryptor(int);
    string encrypted(string&);
    string decrypted(string&);
};
