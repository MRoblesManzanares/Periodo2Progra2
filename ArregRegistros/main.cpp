#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
struct alumno
{ char nombre[30];
    int na,ne,nf;
    char obs[15];

};
const int n=2;
alumno alum[n];
alumno maxalum;
void ingreso(alumno alum[])
{

    for(int i=0;i<=n;i++)
    {
        _flushall();
        cout<<"\nIngresar el nombre del alumno....";
        cin.getline(alum[i].nombre,30);
        cout<<"\nIngresar la nota examen...";
        cin>>alum[i].ne;
        cout<<"\nIngresar la nota acumulada...";
        cin>>alum[i].na;


    }

}
void calcular(alumno alum[])
{
   for(int i=0;i<=n;i++)
   {
       alum[i].nf=alum[i].na+alum[i].ne;
       if(alum[i].nf>=60)
       {
        strcpy(alum[i].obs,"Aprobado");

       }
       else
       {
           strcpy(alum[i].obs,"Reprobado");
       }


   }
}

void presentar1(alumno alum)
{
    cout<<"Alumno"<<alum.nombre;
    cout<<"Nota final es"<<alum.nf;
    cout<<"esta"<<alum.obs<<"\n";

}
void presentar2(alumno alum[])
{
    for(int i=0;i<=n;i++)
    {
        presentar1(alum[i]);
    }
}
alumno mayoralum(alumno alum[])
{
    alumno temp;
    temp=alum[0];
    for(int i=0;i<=n;i++)
    {
      if(temp.nf<alum[i].nf)
      {
          temp=alum[i];
      }
      return temp;
    }
}
int main()
{
    ingreso(alum);
    calcular(alum);
    presentar2(alum);
    maxalum=mayoralum(alum);
    cout<<"******Mayor*****";
    presentar1(maxalum);
}
