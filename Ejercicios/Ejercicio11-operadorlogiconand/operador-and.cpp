#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

int a = 50;
int b = 70;
int c = 120; 

if (a > b && a > c)
{
    cout << "A es el mayor: " << a;
} else if (b > a && b > c) 
{
    cout << "B es el mayor: " << b;
}else 
{
    cout <<"C es el mayor: " << c;
}
 
    return 0;
}
