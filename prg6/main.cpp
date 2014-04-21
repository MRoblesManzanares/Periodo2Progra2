#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Ingresar un numero";
    cin>>a;


    if(a>0)
    {
       cout<<" Es Positivo";
    }
     else if(a==0)
     {

         cout<<"Es nulo";
     }
     else
        {
         cout<<"Es negativo";
        }

    return 0;
}
