#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int dado1 = 0;
    int dado2 = 0;


    //inicializa el numero random
    srand(time(NULL));

   
    
        //genera un numero entre 1 y 6
        dado1 = rand() % 6 + 1;
        cout << "El numero del dado 1 es: " << dado1 << endl; 
        
        //genera un numero entre 1 y 6
        dado2 = rand() % 6 + 1;
        cout << "El numero del dado 2 es: " << dado2 << endl; 

    
    
    return 0;
}
