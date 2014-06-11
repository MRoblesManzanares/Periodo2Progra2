#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;
/* elaborar un procedimiento para ingresar el nombre y las ventas de todos los empleados.
calcular la comision y  el seguro  social usandp una funcion para cada uno de ellos.
la comi se calcula asi;
1-20000 3%
20001-50000 4%
50001 - 5%
hacer los calculos de todo el arreglo de registros usando un procedimiento.
presentar los datos usando un procedimiento.*/

struct emple
{
    char nombre[30];
    double ventas [4];
    double sumaventa,ihss,comis,tp;

};
const int n=4;
emple emplex[n];

void ingresar (emple emplex[])
{


for(int i=1;i<=4;i++)
{   _flushall();
    cout<<"Nombre del empleado"<<"...:";;
    cin.getline(emplex[i].nombre,30);
    for(int k=1;k<=4;k++)
    {
     cout<<"Ingresar la venta "<<k<<"...:";
     cin>>emplex[i].ventas[k];
    }


}

}
double seguro(double pb)
{
    if(pb>7000)
    {
        return 245;
    }
    else{
        return pb*0.035;
    }
}
double comision(double sumaventa)
{
    if(sumaventa<=20000)
    {

        return 0.03;
    }
    else if(sumaventa<=50000)
    {
        return 0.04;
    }
    else if(sumaventa>50000)
    {
        return 0.05;
    }
    else
    {
        return 0;
    }

}
double suma(double ventas[])
{double xsum=0;

for(int i=0;i<=n;i++)
{
    xsum+=ventas[i];
}
    return xsum;
}
void calcular(emple emplex[])
{

for(int i=0;i<=n;i++)
{

    emplex[i].sumaventa=suma(emplex[i].ventas);
    emplex[i].comis=emplex[i].sumaventa*comision(emplex[i].sumaventa);
    emplex[i].ihss=seguro(emplex[i].comis);
    emplex[i].tp=emplex[i].comis-emplex[i].ihss;
}
}

void presentar(emple emplex[])
{

for(int i=0;i<=n;i++)
{
   cout<<"\nEmpleado :"<<emplex[i].nombre;
   cout<<"\nTotal ventas :"<<emplex[i].sumaventa;
   cout<<"\nComision :"<<emplex[i].comis;
   cout<<"\nIhss :"<<emplex[i].ihss;
   cout<<"\nTotal a pagar :"<<emplex[i].tp;
   cout<<"\n";
}
}
int main()
{
 ingresar(emplex);
 calcular(emplex);
 presentar(emplex);
}
