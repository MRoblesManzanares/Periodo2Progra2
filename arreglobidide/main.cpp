#include <iostream>

using namespace std;
const int i=2;
const int j=2;
char num [i][j];
void rellenar(char num[i][j])
{
    for(int l=0;l<=i;l++)
    {
        for(int c=0;c<=j;c++)
        {
            num[l][c]='*';
        }
    }
}
void presentar(char num [i][j])
{
    for(int l=0;l<=i;l++)
    {
        for(int c=0;c<=j;c++)
        {
        cout<<num[l][c]<<" ";

        }
        cout<<"\n";
    }
}
void pedir(char num [i][j],char jugador='X')

{

    int linea,columna;


    cout<<"linea"<<jugador;
    cin>>linea;
    cout<<"columna"<<jugador;
    cin>>columna;
    num[linea][columna]=jugador;
    if(jugador=='X')
    {
        jugador='0';

    }
    else
    {
        jugador='X';
    }
}

int main()
{
    rellenar(num);
    presentar(num);
    for(int a=0;a<3;a++)
    {
    pedir(num,'X');
    presentar(num);
    pedir(num,'0');
    presentar(num);
}
}
