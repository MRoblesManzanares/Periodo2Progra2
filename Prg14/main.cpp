#include <iostream>

using namespace std;
/* ingresar un numero entre el 1-10 presentar mulrilplicar de 1 a 10. hacerlo 5 veces */



int main()

{
    int numero,tabla;
   for(int i=0;i<5;i++)
   {
      do //solo sirve para validar
      {
          cout<<"\nIngresar un numero entre 1-10.....";
          cin>>numero;
      }while(!((numero>=1)and (numero<=10)));
      for(int k=0; k<=10;k++)
      {
          tabla=numero*k;
          cout<<numero<<"x"<<k<<"="<<tabla<<"\n";
      }
      cout<<"\n";
   }
}
