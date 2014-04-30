#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
// Ingresar el nombre del empleado , las ventas y el turno y luego determinar el % de comision usando el turno ihss y total  a pagar
//Turno  %comision
//1        5%
//2        7%
//3        8%

int main()
{
   char nombre[30];
   int ventas,turno;
   double pc,comis,ihss,tp;
   char resp;





       cout<<"\nNombre del empleado";
       cin.getline(nombre,30);
       cout<<"\nIngrese las ventas: ";
       cin>>ventas;
       cout<<"\nTurno 1,2,3";
       cin>>turno;

       while(!((turno>=1) and (turno<=3)));
       _flushall();

       switch(turno)
       {
       case 1:
           pc=0.05;
           break;
       case 2:
        pc=0.07;
       case 3:
        pc=0.08;
        break;
       }
       comis=pc*ventas;
       if(comis>700)
        ihss=245;
       else
        ihss=0.035*comis;

       tp=comis-ihss;
       cout<<"\n %comision :"<<pc;
       cout<<"\n comision ganada: "<<comis;
       cout<<"\n ihss: "<<ihss;
       cout<<"\n total a pagar: "<<tp;
        do
        {
           cout<<"\n Desea continuar";
           cin.get(resp);
           _flushall();


        }while((resp!='S') and (resp!='N'));

     while ((resp!='N'));


}
