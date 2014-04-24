#include <iostream>

using namespace std;

int main()
{
   int num,c;
   int impar,par,promedio,sumapar,sumaimpar;
   float promedioimpar;
    impar=0;
    par=0;
    c=0;
    promedio;
    promedioimpar;
    sumapar=0;
    sumaimpar=0;
     while (c<5)
     {
         cout<<"\n Ingresar un numero\n";
         cin>>num;
         if(num%2==0)
         {


         par++;
         sumapar=sumapar+num;
         promedio=sumapar/par;

         }

         else
            {
            impar++;
            sumaimpar=sumaimpar+num;
             promedioimpar=sumaimpar/impar;
         }
         c++;


     }



            cout<<"\nLos numeros pares son : "<<par;
            cout<<"\nLos numeros impares son "<<impar;
            cout<<"\nEl promedio de los numeros pares son : "<<promedio;
             cout<<"\nEl promedio de los numeros impares son : "<<promedioimpar;
         return 0;

}
