#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int cantidad=0;
	float peso = 0, npeso = 0, naltura = 0, nhombres = 0, nmujeres = 0, altura = 0, propeso = 0, proalt = 0;
    char sexo;
	cout << "Ingrese numero de personas: ";
    cin>>cantidad;
    cout << endl;
    cout << endl;
         npeso = 0;
		 naltura = 0;
		 nhombres = 0; 
		 nmujeres = 0; 
    for(int i = 1; i<= cantidad ; i++){
	    
	    cout << "Persona ";
		cout << i; 
		cout <<": ";
		cout << endl;
		cout << "Ingrese su sexo:";
		cout << endl;
        cout << "M = Hombre: ";
        cout << "F = Mujer: ";
        cin >> sexo;
        cout << endl;
        
        cout << "Ingrese su peso en lbs: ";
        cin >> peso;
        	npeso = npeso + peso;     
        cout << endl;
        cout << endl;
        
		cout << "Ingrese altura en cms: ";
        cin >> altura;
        	naltura = naltura + altura;
        cout << endl; 
        cout << endl;
        
	
        
        if( sexo == 'M' || sexo == 'm'){
		
            nhombres = nhombres + 1;
            
        }
		if ( sexo == 'F' || sexo == 'f' ){
	
            nmujeres = nmujeres + 1;
            
        	}
        cout <<  "";
}
    cout << "Promedio de peso: ";
	propeso = npeso/cantidad;
	cout << propeso;
	cout << endl;
	
    cout << "Promedio de altura: ";
    cout << "Promedio de altura: ";
	proalt = naltura/cantidad;
	cout << proalt;
	cout << endl;
	
    cout << "Numero de hombres: " ;
	cout << nhombres;
    cout << endl;
    
    cout << "Numero de mujeres: " ;
	cout << nmujeres;
    cout << endl;
	return 0;
}
