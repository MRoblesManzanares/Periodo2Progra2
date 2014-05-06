#include <iostream>

using namespace std;
/*
Ingresar 3 numeros usando un procedimiento,luego determinar el numero mayor usando otro procedimiento presentarlo
en el main */
void ingreso(int &num1,int &num2,int &num3)
{
    cout<<" Ingresar numero 1...:";
    cin>>num1;
    cout<<" Ingresar numero 2...:";
    cin>>num2;
    cout<<" Ingresar numero 3...:";
    cin>>num3;
}
void maximo(int num1,int num2,int num3,int &mayor)
{
    if(num1>num2)
    {
        mayor=num1;
    }
    else
    {

    mayor=num2;
    }

   if(mayor>num3)
   {
       mayor=mayor;
   }
   else{
    mayor=num3;
   }

}
int main()
{
    int num1,num2,num3,mayor;
    ingreso(num1,num2,num3);
    maximo(num1,num2,num3,mayor);
    cout<<"El mayor es...:"<<mayor;
}
