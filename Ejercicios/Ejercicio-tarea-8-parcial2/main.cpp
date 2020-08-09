#include <iostream>
#include <math.h>

using namespace std;


int main(int argc, char const *argv[])
{
    double numero = 0;  
    double raiz = 0;

    cout << "Por favor ingrese un numero" << endl;
    cin >> numero;
    cout << endl;

    raiz = sqrt(numero);

    cout << "La Raiz del numero es: " << raiz << endl;

    return 0;
}
