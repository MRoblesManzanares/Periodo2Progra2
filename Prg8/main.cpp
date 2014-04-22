#include <iostream>

using namespace std;
//esttructura de repeticion ingresar 5 numeros y presentar el final del ciclo de la suma de los numeros ingresados.
int main()
{
    int num,suma,promedio;
    int mayor50=0;
    int suma2;
    int c=0;
    suma=0;
    suma2=0;
     while (c<5)
     {
         cout<<"\n Ingresar un numero\n";
         cin>>num;
         if(num>50)
         {
             mayor50++;
           suma2=suma2+num;

          }


         c++;//c=c+1
         suma=suma+num;

     }
    cout<<"\nLa suma de los numeros son:"<<suma;
    cout<<"\nLos numeros mayores a 50 son:"<<mayor50;
     cout<<"\nLos suma de los numeros mayores a 50 son:"<<suma2;


}
