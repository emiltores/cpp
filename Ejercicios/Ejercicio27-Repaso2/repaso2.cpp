#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int opcion = 0;
    while (true)
    {
        system("cls");

        cout <<"****";
        cout <<"Menu";
        cout <<"****";
        cout << endl;
        cout << endl;
        cout << "1. Bebidas calientes" << endl;
        cout << "2. Bebidas Heladas" << endl;
        cout << "3. Reposteria" << endl;
        cout << "0. Salir" << endl;


        cout << endl; 
        cout << "ingrese una opcion entre 1 - 3: ";
        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }
        
        if (opcion == 1)
        {
            system("cls");
            cout << "***************" << endl;
            cout << "BEBIDAS HELADAS" << endl;
            cout << "***************" << endl;

            system("pause");
        }
        if (opcion == 2)
        {
            system("cls");
            cout << "*****************" << endl;
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;

            system("pause");
        }
        if (opcion == 3)
        {
            system("cls");
            cout << "**********" << endl;
            cout << "REPOSTERIA" << endl;
            cout << "**********" << endl;

            system("pause");
        }

        if (opcion < 0 || opcion > 3)
        {
            system("cls");
            cout << "Error!, Escoja un numero valido entre 0 - 3: " << endl;
            system("pause");
        }
        

    }
    
    return 0;
}
