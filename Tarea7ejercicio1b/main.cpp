#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void ordenar_numeros(int arreglo [])
{
    int Temp;
    for(int i=0;i<10;i++)
        for(int j=0;j<10-1;j++)
    if(arreglo[j]<arreglo[j+1]){
      Temp=arreglo[j];
      arreglo[j]=arreglo[j+1];
      arreglo[j+1]=Temp;}
       for(int i=0;i<10;i++)
        cout<<arreglo[i]<<"\n";

}
int main()
{
int random[10];

 srand(time(0));
 cout<<"\nNumeros generados son\n";
		  for (int i = 0; i < 10; i++)
				   {
					random[i] = 1+ rand() % (100-1);
					cout << random[i] << endl;
				   }
cout<<"\nNumeros ordenados descendente\n";
  ordenar_numeros(random);

}

