#include <iostream>

using namespace std;

int sumar (){

    return 5 + 7;
}

string nombreCompleto(){
    string nombre = "Juan";
    string apellido = "Perez";

    return nombre + " " + apellido;
}
int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nombreApellido = nombreCompleto();
    
    cout << resultado;

    cout << endl;

    cout << nombreApellido;

    return 0;
}
