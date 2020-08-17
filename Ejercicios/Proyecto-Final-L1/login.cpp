#include <iostream>

using namespace std;
 
 int main(int argc, char const *argv[])
 {
        string usuario; 
        string password;
        int intentos = 0;
        int oportunidades = 3;
        bool ingresar = false;
     do
     {
       system("cls");
        cout << " _____________________________________________________________________________________________________"  << endl;
        cout << "/   .______. ._     __ ._      _.  .__.        .____. ._        .__. ._______. .______    ._______.   \\" << endl;
        cout << "|  /  _____|  \\\\   / / | \\    / | |  |        /  __ \\\\ \\ \\      / /  |   ____| |   _ \\    /        |  |" << endl;
        cout << "| |  |  __     \\\\ / /  |  \\  /  | |  |       |  |  | |  \\ \\    / /   |  |__    |  |_) | |    (----`   |" << endl;
        cout << "| |  | |_ |     \\\\ /   |  |\\/|  | |  |       |  |  | |   \\ \\  / /    |   __|   |      /  \\   \\        |" << endl;
        cout << "| |  |__| |     / /    |  |  |  | |  |_____. |  |__| |    \\ \\/ /     |  |____  |  |\\ \\   .------)     |" << endl;
        cout << "| \\\\______|    /_/     |__|  |__| |________|  \\_____/      \\_\\/      |_______| |__| \\_\\ |_______/     |" << endl;
        cout << "\\_____________________________________________________________________________________________________/ ";
        cout <<endl;
        cout <<endl;

        cout << "\t\tLOGIN DE USUARIO" << endl;
        cout << "\t\t****************" << endl;
        cout << "\n\tUsuario: ";
        cin >> usuario;
        cout << "\tPassword: ";
        cin >> password;

     if ( usuario == "Antonio" || usuario == "Roberto" || usuario == "Bily" && password == "L1" )
     {
         ingresar = true;
     }else {
        cout << "\n\tUSUARIO O PASSWORD INCORRECTOS" << endl;
        cout << "\n\tUSTED TIENE" <<" " << oportunidades << " " << "INTENTOS" << endl;
        intentos++;
        oportunidades--;
        system("pause");
     }
     }while ( ingresar == false && intentos <= 3);
      if (ingresar == false)
      {
          cout << "\n\tUSUARIO BLOQUEADO!" << endl;
      }else
      {
          cout << "\n\tBIENVENIDO AL SISTEMA" << endl;
      }
      
     return 0;
 }
 