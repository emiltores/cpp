#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

int a = 50;
int b = 7;
int c = 12; 

// if (a > b && a > c)
// {
//     cout << "A es el mayor: " << a;
// } else if (b > a && b > c) 
// {
//     cout << "B es el mayor: " << b;
// }else 
// {
//     cout <<"C es el mayor: " << c;
// }
 
if (a > b && a > c)
{
    cout << "A es el mayor: " << a;
} 
 if (b > a && b > c) 
{
    cout << "B es el mayor: " << b;
}
if (c > a && c>b)
{
     cout <<"C es el mayor: " << c;
}


    return 0;
}
