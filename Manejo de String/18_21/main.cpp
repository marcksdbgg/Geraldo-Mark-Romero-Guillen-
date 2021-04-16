#include <iostream>
#include <cstring>
#include <vector>
using std::strtok;
using namespace std;

int main() {
    string alf={".,;:?!()[]_-*'¨´"};
    char *tokens;
    string ms="Hola, Dios soy yo de nuevo :(; que estoy pagando? ... Son las 11-11 siento que me muero!";
    for(int i=0;i<ms.length();i++){
        int pos=alf.find(ms[i]);
        if(pos!=string::npos){
            while(pos!=string::npos){
                ms.replace(i,1," ");
                pos=ms.find(alf[i],pos+1);
            }
        }
    }

    cout<<"Texto sin los signos de puntacion:"<<endl<<ms<<endl;
    char trans[ms.size()];
    for(int i=0;i<ms.size();++i){
        trans[i]=(ms[i]);
    }
    cout<<endl<<"Particion en tokens:"<<endl;
    tokens=strtok(trans, " ");
    while(tokens!=NULL){
        cout<<tokens<<endl;
        tokens=strtok(NULL, " ");
    }
    return 0;
}
