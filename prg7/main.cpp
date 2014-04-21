#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//ingresar un numero random entre 1-350 y determinar el rango en el que se encuentra¨1-50 51-120 120-200 200-350

//


int main()
{
   int numero;
    srand(time(0));
    //cout<<"\nIngresar un numero entero\n";
   // cin>>numero;
    numero=1+rand()%(320-1);
    cout<<"\nNumero generado es\n"<<numero;
    if((numero>1) and (numero<=50))
    {
        cout<<"\nEl numero esta en el rango  1-50 \n";

    }
    else if((numero>=51) and (numero<=120))

    {
        cout<<"\nEl numero esta en el rango 51-120\n";
    }
    else if((numero>=121) and (numero<=200))

    {
        cout<<"\nEl numero esta en el rango 121-200\n";
    }
     else if((numero>=201) and (numero<=350))

    {
        cout<<"\nEl numero esta en el rango 201-350\n";
    }
    else if(numero>350)
         {
        cout<<"\nEl numero es mayor que 350\n";
    }
    else
         {
        cout<<"\nEl numero es negativo\n";
    }


    cout<<"\n";
    system("pause");
}


