#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    char nombre[30];
    int horas,pagaxhora,pagobruto,ihss,pagototal,turno,bono;
    cout<<"Ingresar nombre del empleado";
    cin.getline(nombre,30);

    cout<<"Horas trabajadas";
    cin>>horas;


    cout<<"turno de trabajo";
    cin>>turno;
    if (turno==1)
        {
        pagaxhora=200;
        }
        else if (turno==2)
        {

            pagaxhora=300;
        }
        else if
        (turno==3)
        {

        pagaxhora=370;
        }
    else
    {
        pagaxhora=0;
    }
    if ((turno==1) or (turno==3))
    {
        bono=400;

    }
    else
    {
        bono=0;
    }

    pagobruto=(pagaxhora*horas)+bono;

    if (pagobruto>7000)

      {
        ihss=245;
    }

    else
    {
        ihss=0.035*pagobruto;
    }
    pagototal=pagobruto-ihss;
    cout<<"\npago porr hora\n"<<pagaxhora;
    cout<<"\nbono ganado es"<<bono;
    cout<<"\npago antes de deduccion"<<pagobruto;
    cout<<"\nseguro social"<<ihss;
    cout<<"\nTotal a pagar"<<pagototal;
    return 0;
}
