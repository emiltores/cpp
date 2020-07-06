#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    // Datos De Entrada
    double subtotal = 0;
    double Total = 0;
    double impuesto = 0.15;


    cout << "Ingrese el subtotal de la factura: ";
    cin >>subtotal;
    
    // Procesando Datos

    Total = subtotal + (subtotal * impuesto);

    // Salida De Datos

    cout << endl;
    cout << "El Total a Pagar Es: " << Total; 

    return 0;
}
