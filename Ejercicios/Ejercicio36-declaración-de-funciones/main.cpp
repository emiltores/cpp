#include <iostream>

using namespace std;

int numero = 0;

int suma(int a, int b);

int main(int argc, char const *argv[])
{
    system("cls");
    numero = 5;
    cout << suma(5, 7) << endl;

    cout << numero << endl;

    return 0;
}

int suma(int a, int b)
{
    numero=7;
    return a + b;
}