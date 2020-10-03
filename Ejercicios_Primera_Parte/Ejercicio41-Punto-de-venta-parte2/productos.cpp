#include <iostream>

using namespace std;


void productos(int opcion)
{
    system("cls");

    switch (opcion)
    {
    case 1:
    {
        cout << "*****************" << endl;
        cout << "StarShip" << endl;
        cout << "*****************" << endl;
        system ("pause");

        break;
    }
    case 2:
    {
        cout << "*************" << endl;
        cout << "Snake" << endl;
        cout << "*************" << endl;
        system ("pause");

        break;
    }
    default:
        break;
    }
}