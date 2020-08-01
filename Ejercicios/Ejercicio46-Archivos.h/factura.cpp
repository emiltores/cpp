#include <iostream>

using namespace std;

double subtotal;
double impuesto;
double totalApagar;
string listaProductos;

void agregarProductos(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    totalApagar = subtotal + impuesto;

}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal << endl << endl;
    cout << "Total Impuesto (15%): " << impuesto << endl << endl;
    cout << "Total Factura: " << totalApagar;

    
    cout << endl;
    cout << endl;
    system("pause");
}