#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A = 0;
    int B = 0;
    int ResultSuma;
    int ResultResta;
    int ResultMulti;
    int ResultDivi;

    //Datos De Entrada
    cout << "Por Favor Ingrese El Primer Numero: ";
    cin >> A;

    cout <<endl;

    cout << "Por Favor Ingrese El Segundo Numero: ";
    cin  >> B;

    //Proceso De Datos

    ResultSuma = A + B;
    ResultResta = A - B;
    ResultMulti = A * B;
    ResultDivi = A / B;

    //Datos De Salida
    cout  << "La Suma Del Primer Numero y El Segundo Numero Es:" <<ResultSuma <<endl;
    cout  << "La Resta Del Primer Numero y El Segundo Numero Es:" <<ResultResta <<endl;
    cout  << "La Multiplicación Del Primer Numero y El Segundo Numero Es:" <<ResultMulti <<endl;
    cout  << "La División Del Primer Numero y El Segundo Numero Es:" <<ResultDivi <<endl;

    return 0;
}
