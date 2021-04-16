#include <iostream>
#include <string>
using namespace std;

int main() {
    string respuesta="si";
    while (respuesta=="si") {
        bool win = false;
        string ms="ahorcado";
        string ms_x;
        int vida=7;
        for (int i=0; i<ms.length(); i++){
            ms_x+="x";
        }
        cout << "El mensaje es:"<<endl<<ms_x << endl<<"Usted tiene 7 intentos good luck"<<endl;
        while(!win){
            int pos;
            int pos_x;
            string le;
            cout << ms_x <<endl<<endl;
            cout<<"Ingrese una letra \t Tiene "<<vida<<" vida(s) restantes"<<endl;
            cin >> le;
            pos=ms.find(le);
            if(pos!=string::npos){
                while(pos!=string::npos){
                    ms_x.replace(pos, 1, le);
                    pos=ms.find(le,pos+1);
                }
            }else{
                vida--;
            }
            switch(vida){
                case 6:
                    cout<<" O "<<endl;
                    break;
                case 5:
                    cout <<" O"<<endl;
                    cout <<"/"<<endl;
                    break;
                case 4:
                    cout <<" O"<<endl;
                    cout <<"/|"<<endl;
                    break;
                case 3:
                    cout <<" O"<<endl;
                    cout <<"/|\\"<<endl;
                    break;
                case 2:
                    cout <<" O"<<endl;
                    cout <<"/|\\"<<endl;
                    cout <<" |"<<endl;
                    break;
                case 1:
                    cout <<" O"<<endl;
                    cout <<"/|\\"<<endl;
                    cout <<" |"<<endl;
                    cout <<"/"<<endl;
                    break;
                case 0:
                    cout <<" O"<<endl;
                    cout <<"/|\\"<<endl;
                    cout <<" |"<<endl;
                    cout <<"/ \\"<<endl;
                    break;
            }
            if(vida==0){
                cout << "Perdiste, intentalo otra vez si/no"<<endl;
                cin>>respuesta;
                win=true;
            }
            pos_x=ms_x.find("x");
            if(pos_x==string::npos){
                cout << "Felicidades!!! Adivino mi palabra. Desea jugar otra vez? si/no"<<endl;
                cin>>respuesta;
                win = true;
            }
        }
    }




    return 0;
}
