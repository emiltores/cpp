#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int opcion = 0;

    while (true)
    {   
        system ("cls");
        cout << "*****" << endl;
        cout << "MENU"<< endl;
        cout << "*****" << endl;

        cout << endl;
        cout << "1. Cafe y Granitas" << endl;
        cout << "2. Reposteria" << endl;
        cout << "0. Salir" << endl;

        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Estas en el Menu de cafe y granitas" << endl;  
            break;
        case 2:
            cout << "Estas en el Menu de Reposteria" << endl;
            break;
           
        default:
            cout << "Saliste del sistema" << endl;
            break;
        }
    }    
    return 0;
}
