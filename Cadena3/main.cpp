#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

const t=4;
char cadena [t][30];
/*imgresar una cadena de 30 letras ,luego usando un procedimkiento cambiar las vocales de la cadena por una */

void ingresar(char cadena[t][30])
{  for(int i=0;i<=t;i++)
    cout<<"Ingresar cadena de 30 letras Max...";
    cin.getline(cadena,30);
}
void cambiar(char cadena[])

{
    for(int i=0;i<strlen(cadena);i++)
    {
        switch(cadena[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case  'E':
        case 'o':
        case 'O':
        case 'i':
        case 'I':
        case 'u':
        case 'U':

        }
    }
}


int main()

{

 ingreso(cadena);
 cambiar(cadena);
    cout << "Cadena cambiada" <<cadena<<"\n";
    return 0;
}
