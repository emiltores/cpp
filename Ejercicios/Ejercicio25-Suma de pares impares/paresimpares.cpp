#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares =0;
    int totales = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            pares = pares + i;
        }else {
            if (i % 2 ==1)
            {
                impares = impares + i;
            }
            
        }
        
        cout << i << " ";
    }
    totales = (pares + impares);
    cout << endl;
    cout << endl;
    cout << "Total pares" << pares;
    cout << "Total impares" << impares;
    cout << "Total" << totales;



    return 0;
}
