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
            cout << "1 - Granita de Cafe" << endl;
            cout << "2 - Granita de Fresa" << endl;
            cout << "3 - Frapuchatta" << endl;
            cout << endl;

            cout << "Ingrese una Opcion: "; 
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProductos("1 Granita de Cafe - L 28.00", 1, 28);
                break;
                
            case 2:
                agregarProductos("1 Granita de Fresa - L 20.00", 1, 20);
                break;
            case 3:
                agregarProductos("1 Frapuchatta - L 35.00", 1, 35);
                break;
            
            default:
            {
                cout << "Opcion no valida" << endl;
                return;
                break;
            }
        }
    }
    {
        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system("pause");
        break;
    }
    case 3:
    {       
            
            cout << "**********" << endl;
            cout << "REPOSTERIA" << endl;
            cout << "**********" << endl;
            cout << "1 - Marmoleado" << endl;
            cout << "2 - Pastelito de Coco" << endl;
            cout << "3 - Galleta con Chispas de Chocolate" << endl;
            cout << endl;

            cout << "Ingrese una Opcion: "; 
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProductos("1 Marmoleado - L 25.00", 1, 25);
                break;
                
            case 2:
                agregarProductos("1 Pastelito de Coco - L 15.00", 1, 15);
                break;
            case 3:
                agregarProductos("1 Galleta con Chispas de Chocolate - L 25.00", 1, 25);
                break;
            
            default:
            {
                cout << "Opcion no valida" << endl;
                return;
                break;
            }
        }
    }
        {
                cout << endl;
                cout << "Producto Agregado" << endl << endl;
                system("pause");
                break;
        }
    }
}