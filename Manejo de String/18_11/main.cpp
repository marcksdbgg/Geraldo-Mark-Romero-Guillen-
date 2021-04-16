#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    string apellido;
    string fullname;
    cout << "Introduce tu nombre:" << endl;
    cin >> nombre;
    cout<<"Introduce tu apellido:" << endl;
    cin >> apellido;
    fullname+=(nombre+" "+apellido);
    cout<<"Su nombre completo es:"<<endl;
    cout<<fullname;
    return 0;
}
