#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string ms;
    string result;
    string cadenas;
    vector<string> resultado;
    int lim;
    cout << "Ingrese una oracion:" << endl;
    getline(cin, ms);
    cout << "Ingrese el numero de caracteres que tendra cada bloque:" << endl;
    cin>>lim;
    for (int i = 0; i < ms.length(); i+=lim) {
        int k=i;
        for (int j = 0; j < lim ; ++j) {
            if(k>=ms.length()){
                result+="X";
                cadenas+="X";
            }else{
                result+=ms[k];
                cadenas+=ms[k];
            }
            k++;
        }
        cout << result<<endl;
        resultado.push_back(result);
        cadenas+="*";
        result="";
    }
    cout <<cadenas << endl;
    cadenas.pop_back();
    for (int i = 0; i < resultado.size(); i++)
    {
        cout << resultado[i] << " , ";
    }
    return 0;
}
