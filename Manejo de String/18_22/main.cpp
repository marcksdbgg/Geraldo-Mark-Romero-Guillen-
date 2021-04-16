#include <iostream>
#include <string>
using namespace std;

int main() {
    string ms;
    cout << "Introduzca su oracion: " << endl;
    cin>> ms;
    string::const_iterator it=ms.end();
    while(it!=ms.begin()){
        cout << *it;
        it--;
    }
    cout << endl;
    return 0;
}
