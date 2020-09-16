#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares =0;
    int totales = 0;
    int numero = 0;
    
	cout << "Por Favor ingrese un numero positivo: ";
	cin>> numero;
	
	while (numero <= 0)
    {
        cout << "Error!, Por favor ingrese un numero positivo: ";
        cin>> numero;
    }
    cout << endl;
    cout << endl;

    for (int i = 0; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            pares = pares + i;
        }else {
            if (i % 2 ==1)
            {
                impares = impares + i;
            }
            
        }
        
        cout << i << " ";
    }
    totales = (pares + impares);
    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares << endl;
    cout << "Total impares: " << impares << endl;
    cout << "Total: " << totales;



    return 0;
}
