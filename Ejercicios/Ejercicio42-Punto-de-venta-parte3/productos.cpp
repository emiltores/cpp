#include <iostream>

using namespace std;

extern void agregarProductos(string descripcion, int cantidad, double precio);

int opcionProducto = 0;
void productos(int opcion)
{
    system("cls");

    switch (opcion)
    {
    case 1:
    {
       
        
            cout << "*****************" << endl;
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            cout << "1- Capuccino" << endl;
            cout << "2- Expresso" << endl;

            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProductos("Capuccino", 1, 40);
                break;
                
            case 2:
                agregarProductos("Expresso", 1, 30);
                break;
            
            
            default:
                cout << "Opcion no valida" << endl;
                break;
            }
        
    

        break;
    }
    case 2:
    {
        cout << "*************" << endl;
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        system ("pause");

        break;
    }case 3:
    {
        cout << "**********" << endl;
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        system ("pause");

        break;
    }
    default:
        break;
    }
}