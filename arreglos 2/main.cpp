#include <iostream>

using namespace std;
/* Ingresar 50 numeros a un  arreglos de enteros,
luego elaborar una funcion para devolver el numero
mayor, una funcion para devolver el numero de pares
que hay en el arreglo

*/
const int tam=4;
int numero [tam];
void ingresar(int numero[])
{
    for(int i=0;i<=tam;i++)
    {
        cout<<"ingresar el numero ["<<i<<"]...";
        cin>>numero[i];

    }
}
int mayor(int numero[])
{
    int maxi=0;


   for(int i=0;i<=tam;i++)
   {
       if(numero[i]>maxi)
        maxi=numero[i];
        else
        {
            maxi=numero[i];

        }
     }
   return maxi;
}
int menor(int numero[])
{
    int menorx=numero[0];


   for(int i=0;i<=tam;i++)
   {
       if(numero[i]<menorx)
        menorx=numero[i];

     }
   return menorx;
}
int pares(int numero[])
{
    int xpar=0;

    for(int i=0;i<=tam;i++)
   {
       if(numero[i]%2==0)
        xpar++;




   }
   return xpar;
}


int main()
{
    int xmax=0;
    int cpar=0;
    int meno=0;

    ingresar(numero);
    xmax= mayor(numero);
    cout<<"\nEl mayor numero del arreglo es.."<<xmax;
    cpar=pares(numero);


    cout<<"\nLos numeros pares son.."<<cpar;
    meno=menor(numero);
    cout<<"\nEl numero menor del arreglo es.."<<meno;

}
