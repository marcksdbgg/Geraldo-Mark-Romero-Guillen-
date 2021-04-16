#include <iostream>
#include "Encryptor.h"
using namespace std;

int main(){
    string ms="Hola como estas";
    string aux;
    encryptor user(6);
    ms=user.encrypted(ms);
    cout<<"Mensje enciptado:"<<endl;
    cout<<ms<<endl;
    aux=user.decrypted(ms);
    cout<<"Mensje desencriptado:"<<endl;
    cout<<aux<<endl;
}