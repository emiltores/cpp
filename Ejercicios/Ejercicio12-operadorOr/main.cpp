#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	int a = 10;
	int b = 12;
	int c = 7;
	
	
	if (a > 8 && b > 8 && c > 8 )
	{
		cout << "Todos son mayores que 8";
	}

	if (a > 8 || b > 8 || c > 8 )
	{
		cout << "Algun numero es mayor";
	}


	return 0;
}
