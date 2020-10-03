#include <iostream>
#include "startShip.h"
#include "snake.h"


using namespace std;

int main(int argc, char const *argv[])
{
    
    int opcion = 0;

    while (true)
    {
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


        cout << "1 - StartShip" << endl;
        cout << "2 - Snake" << endl;
        cout << "3 - Packman" << endl;


        cout << endl;
        cout << "Ingrese un numero del menu para seleccionar el juego: ";

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

            case 0:
                system("cls");
                break;    

            }
}
    return 0;
}
