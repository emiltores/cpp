#include <iostream>
#include "stdlib.h"
#include "time.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int sumaArreglo = 0;
    int arreglo[5][5];

    srand(time(NULL));

    cout << "\t\t**************" << endl;
    cout << "\t\tArreglo de 5x5" << endl;
    cout << "\t\t**************" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            
            arreglo[i][j] = rand() %  1 + 1;
            cout << "\t";
            cout << arreglo[i][j] << " ";
            
            sumaArreglo = sumaArreglo + arreglo[i][j];
        }  
            cout << endl;
    } 
    cout << endl;

    cout << "\tLa suma del Arreglo es: " << sumaArreglo << endl << endl ;

    return 0;
}
