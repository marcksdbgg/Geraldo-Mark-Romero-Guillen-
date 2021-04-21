#include <iostream>
#include <string>
#include "Encryptor.h"
using namespace std;

string min (string ms){
    for (int i = 0; i <ms.length();i++){
        ms[i]=tolower(ms[i]);
    }
    return ms;
};

int main() {
    string ms;
    int key;
    cout<<"Ingrese una oracion"<<endl;
    getline(cin, ms);
    ms=min(ms);
    cout<<"Ingrese la clave"<<endl;
    cin>>key;
    encryptor user(key);
    ms=user.encrypted(ms);
    cout<<"Mensaje encriptado"<<endl;
    cout<<ms<<endl;
    ms=user.decrypted(ms);
    cout<<"Mensaje desencriptado"<<endl;
    cout<<ms<<endl;
    return 0;
}
