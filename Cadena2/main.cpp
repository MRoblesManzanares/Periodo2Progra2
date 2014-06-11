#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
/*imgresar una cadena de 30 letras ,luego usando un procedimkiento cambiar las vocales de la cadena por una */
const int t=4;
char cadena [t][30];
void ingresar(char cadena[t][30])
{   for(int i=0;i<=t;i++)
    {cout<<"Ingresar cadena de 30 letras Max...";
    cin.getline(cadena[i],30);
    }
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
            cadena [i]='X';

         break;
         default:
         break;
        }
    }
}
void cambioarreglo(char cadena [t][30])
{for(int i=0;i<=t;i++)
{
   cambiar(cadena[i]);
}

}
void presentar(char cadena [t][30])
{
    for(int i=0;i<=t;i++)
    {
        cout<<"cadena"<<i<<"...:"<<cadena[i]<<"\n";
    }
}

int main()

{

     ingresar(cadena);
   cambioarreglo(cadena);
   presentar(cadena);

}
