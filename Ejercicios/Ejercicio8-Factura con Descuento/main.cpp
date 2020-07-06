#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main(int argc, char** argv) {
	
	
	 // Datos De Entrada
    double subtotal = 0;
    double Total = 0;
    double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento = 0;
	double calculodeImpuesto = 0;

    cout << "Ingrese el subtotal de la factura: ";
    cin >>subtotal;
    
    cout << endl;
    
    cout << "Ingrese El Descuento (0, 5, 10, 20)";
    cin >>descuento;
    // Procesando Datos
	calculoDescuento = (subtotal * descuento) / 100;
	calculodeImpuesto = (subtotal - calculoDescuento) * 0.15;
    Total = subtotal - calculoDescuento + calculodeImpuesto;

    // Salida De Datos

    cout << endl;
    cout << "El Total a Pagar Es: " << Total; 

	return 0;
}
