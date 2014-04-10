#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int numero;
    srand(time(0));
    //cout<<"\nIntroducir numero>\n";
    //cin>>numero;

     numero=1+rand()%(1000-1);
     if((numero%2==0) and (numero%5==0))
     {
         cout<<"\nEl numero2 es\n"<<numero<<"\ny es divisible entre 2 y 5\n"<<"\n";

     }
     else
     {
         cout<<"\nEl numero2 es\n"<<numero<<" \ny no es divisible entre 2 y 5\n"<<"\n";
     }

    system("pause");
}
