#include <iostream>
using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)
{
    if (miNumero == numeroSecreto)
    {
            cout << "Adivinaste!" << endl;
    }
    else
    {
        cout << "intento fallido con " << miNumero << endl;
        int otroNumero = 0;
        cout << "ingrese otro numero: " << endl;
        cin >> otroNumero;

        adivinarNumeroSecreto(otroNumero);
    }
    
    
}

int main(int argc, char const *argv[])
{
    adivinarNumeroSecreto(5);
    cout << endl;
    return 0;
}
