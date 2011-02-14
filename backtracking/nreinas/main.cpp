#include <iostream>
#include "funciones.h"

using namespace std;


int main()
{
    
    int n;
    
    cout<<"Ingrese el tamaño del tablero: ";
    cin>>n;
    
    bool tablero[n][20];
    
    for(int i=0;i<n;i++)
            for (int j=0;j<n;j++)
                tablero[i][j] = false;
                
    if (nreinas(tablero, n, 0))
    {
        for(int i=0;i<n;i++)
        {
                for (int j=0;j<n;j++)
                {
                    if (tablero[i][j])
                       cout<<"R";
                    else
                       cout<<"#";
                }
                cout<<endl;
        }
    }
    else
    {
        cout<<"No se encontró una solución"<<endl;
    }
    
    //system("pause");
    return 0;
}
