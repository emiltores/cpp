#include <iostream>

using namespace std;

double subtotal;
string listaProductos;

void agregarProductos(string descrpcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descrpcion + '\n';
    subtotal = subtotal + (cantidad * precio);

}