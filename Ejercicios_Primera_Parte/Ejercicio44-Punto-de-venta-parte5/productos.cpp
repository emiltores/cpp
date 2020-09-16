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
            cout << "1 - Capuccino" << endl;
            cout << "2 - Expresso" << endl;
            cout << endl;

            cout << "Ingrese una Opcion: "; 
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProductos("1 Capuccino - L 40.00", 1, 40);
                break;
                
            case 2:
                agregarProductos("1 Expresso - L 30.00", 1, 30);
                break;
            
            
            default:
            {
                cout << "Opcion no valida" << endl;
                return;
                break;
            }
        }
        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system("pause");
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