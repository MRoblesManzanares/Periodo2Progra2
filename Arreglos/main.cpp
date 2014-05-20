#include <iostream>

using namespace std;
const int tam=4;
int numero [tam];

void ingresar(int numero [])
{
    for(int i=0;i<=tam;i++)
    {
        cout<<"\nIngresae numero ["<<i<<"]....";
        cin>>numero[i];

    }
}
void presentar(int numero[])
{
    for(int i=0;i<=tam;i++)
    {
        cout<<"\nNumero["<<i<<"]..>"<<numero[i];
    }
}
int sumar (int numero[])
{
    int xsuma=0;
    for(int i=0;i<=tam;i++)
    {
        xsuma+=numero[i];
    }
    return xsuma;
}

int main()

{
    int suma=0;
ingresar(numero);
presentar(numero);
suma=sumar(numero);
cout<<"\nSuma de los numeros..."<<suma;
}

