#include <iostream>

using namespace std;

void imprimirCaracter(char caracter, int ciclos)
{
    for (int i = 0; i < ciclos; i++)
    {
        cout << caracter;
    }
    
}
int main(int argc, char const *argv[])
{
    system("cls");

    imprimirCaracter('@', 10);
    cout << endl;
    imprimirCaracter('#', 5);
    cout << endl;
    cout << "Hola Mundo" << endl;
    imprimirCaracter('*', 1000);
    return 0;
}
