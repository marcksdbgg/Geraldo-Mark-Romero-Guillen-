#include <iostream>
#include "Encryptor.h"
using namespace std;
int main() {
    string ms="pato";
    string aux;
    encryptor user(13);
    ms=user.encrypted(ms);
    cout<<"Mensje encriptado:"<<endl;
    cout<<ms<<endl;
    aux=user.decrypted(ms);
    cout<<"Mensje desencriptado:"<<endl;
    cout<<aux<<endl;
    return 0;
}
