#include <iostream>
#include <string>
using namespace std;

int main() {
    string ms="Hola como estas";
    string aux="******";
    ms.insert((ms.length())/2,aux);
    cout << ms <<endl;
    return 0;
}
