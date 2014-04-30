#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*ingresar un numero entero,luego preguntar desea  continuar ,al final presentar cuantos numeros fueron pares e impares*/
int main()


{
    int numero,cp,ci;
    char resp;
    ci=0;
    cp=0;

  do
    {
        cout<<"\nIngresar un numero: ";
        cin>>numero;
        if(numero%2==0)
        {
            cp++;
        }
        else
        {
            ci++;
        }
        do
        {
           cout<<"\n Desea continuar";
           cin.get(resp);
           _flushall();


        }while((resp!='S') and (resp!='N'));

    }  while ((resp!='N'));
    cout<<"\nContador de pares....:"<<cp;
    cout<<"\nContador de impares...:"<<ci;
}
