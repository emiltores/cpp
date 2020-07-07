#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numerosecreto = 7;
    int numero;

    cout << "Ingresaste el Numero: ";
    cin >> numero;

    cout << endl;

    if (numero == numerosecreto){
        
        cout << "Adivinaste el numero secreto: ";
        }
        else{
            cout << "No adivinaste: ";
        }
        
    return 0;
}
