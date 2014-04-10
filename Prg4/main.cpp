#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{
    int numero;
    srand(time(0));
    //cout<<"\nIngresar un numero entero\n";
   // cin>>numero;
    numero=1+rand()%(500-1);
    cout<<"\nNumero generado es\n"<<numero;
    if((numero>1) and (numero<=100))
    {
        cout<<"\nEl numero esta en el rango  1-100 \n";

    }
    else if((numero>=101) and (numero<=300))

    {
        cout<<"\nEl numero esta en el rango 101-300\n";
    }
    else if((numero>=301) and (numero<=500))

    {
        cout<<"\nEl numero esta en el rango 301-500\n";
    }
    else if(numero>500)
         {
        cout<<"\nEl numero es mayor que 500\n";
    }
    else
         {
        cout<<"\nEl numero es negativo\n";
    }

    cout<<"\n";
    system("pause");
}
