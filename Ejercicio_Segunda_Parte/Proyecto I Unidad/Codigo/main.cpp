#include <iostream>
#include "startShip.h"
#include "snake.h"



using namespace std;

int main(int argc, char const *argv[])
{
    

    while (true)
    {
        int opcion = 0;

        system("cls");
        
        cout << "Bienvenido a" << endl;
        cout << " _  _      _______      ___      .___     __._______ .______           _______."<<endl;
        cout << "| || |    /  _____|    /   \\    | \\    / ||   ____||   _  \\         /       |"<<endl;
        cout << "| || |_  |  |  __     /  ^  \\   |  \\  /  ||  |__   |  |_)  |       |   (----`"<<endl;
        cout << "|__   _| |  | |_ |   /  /_\\ \\  |  |\\/|  ||   __|  |      /         \\   \\    "<<endl;
        cout << "   | |   |  |__| |  /  _____  \\ |  |   |  ||  |____ |  |\\  \\----..----)   |   "<<endl;
        cout << "   |_|    \\______|/__/    \\__\\|__|   |__||_______|| _| `._____||_______/    "<<endl;
        cout << ""<<endl;
            
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "**************" << endl;
        cout << "MENU DE JUEGOS" << endl;
        cout << "**************" << endl;
        cout << endl;
        cout << endl;
        cout << "Seleccione un juego";
        cout << endl;
        cout << endl;

        cout << "0 - Salir" << endl;
        cout << "1 - StartShip" << endl;
        cout << "2 - Snake" << endl;
        


        cout << endl;
        cout << "Ingrese un numero del menu para seleccionar el juego: ";
        cout << endl;
        cout << endl;

        cin >> opcion;

       switch (opcion)
            {
            case 1:
                system("cls");
                starShip();
                break;
                
            case 2:
                system("cls");
                snake();
                break;

            default:
            cout << "Error! Ingrese una opcion valida entre 0-2: " ;
            cin >> opcion;

            if (opcion == 1)
            {
                system ("cls");
                starShip();
                break;
            }else
            {
                if (opcion == 2)
                {
                    system("cls");
                    snake();
                    break;
                } else
                {
                    if (opcion == 0)
                    {
                        break;
                    }
                    
                }
                
                
            }
            
        return 0;
    }
}
}