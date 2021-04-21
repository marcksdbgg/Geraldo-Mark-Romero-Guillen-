#include <iostream>
#include <string>
#include "Encryptor.h"
using namespace std;

int main() {
    string ms;
    string aux;
    ms="nurg iusu kyzgy";
    for(int i = 1; i < 26; i++){
        encryptor user(i);
        aux=user.decrypted(ms);
        cout<<"Mensaje desencriptado con la clave "<<i<<endl;
        cout<<aux<<endl;
    }
    return 0;
}
