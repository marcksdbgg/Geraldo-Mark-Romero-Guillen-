#include <iostream>
#include <string>
using namespace std;
void ordenamientoSeleccion( string trabajo[], const int tamanio, bool (*compara)( string, string ) )
{
    int menorOMayor;
    int i;
    for (i = 0; i < tamanio - 1; i++ )
    {
        menorOMayor = i;
        int indc;
        for (indc = i + 1; indc < tamanio; indc++ )
            if ( !(*compara)( trabajo[ menorOMayor ], trabajo[ indc ] ) )
                menorOMayor = indc;
        trabajo[ menorOMayor ].swap( trabajo[ i ] );
    }
}
bool ascendente( string a, string b )
{
    return a[0] < b[0];
}
bool descendente( string a, string b )
{
    return a[0] > b[0];
}
int main()
{
    const int tamanioArreglo = 10;
    int disposicion;
    int cont;
    string a[ tamanioArreglo ] = {"gente", "humanidad", "humano", "persona", "hombre",
                                  "mujer", "bebe", "adolescente", "adulto", "anciano"};
    cout << "Escriba el 1 para orden ascendente,\n"
         << "Escriba el 2 para orden descendente: ";
    cin >> disposicion;
    cout << "\nElementos de datos en el orden original\n";
    for ( cont = 0; cont < tamanioArreglo; cont++ )
        cout << a[ cont ]<<" ";
    cout<<endl;
    if (disposicion != 1) {
        ordenamientoSeleccion(a, tamanioArreglo, descendente);
        cout << "\nElementos de datos en orden descendente\n";
    } else{
        ordenamientoSeleccion(a, tamanioArreglo, ascendente);
        cout << "\nElementos de datos en disposicion ascendente\n";
    }
    for(cont=0;cont<tamanioArreglo;cont++)
        cout << a[ cont ]<<" ";
    cout<<endl;
}