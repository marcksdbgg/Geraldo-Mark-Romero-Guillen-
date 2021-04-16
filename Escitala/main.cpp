#include <iostream>
#include <string>
#include "Encryptor.h"
using namespace std;

int main() {
    int i=6, j=6;
    encryptor user(i,j);
    string aux;
    string ms = "Ha pasado tiempo desde que la vi";

    ms = user.encrypted(ms);
    cout<<"Cifrado:"<<endl<<ms<<endl;
    aux = user.decrypted(ms);
    cout<<"Decifrado:"<<endl<<aux<<endl;
}