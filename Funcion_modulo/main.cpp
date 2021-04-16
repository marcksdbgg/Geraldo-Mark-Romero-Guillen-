#include <iostream>
using namespace std;

void division(int a, int n){
    int r = a-n*(a/n);
    int q = a/n - (r<0);
    r = a-q*n;
    cout<<"valor q: "<<q<<endl;
    cout<<"Valor r: "<<r;
}

int main() {
    division(-255,11);
}

