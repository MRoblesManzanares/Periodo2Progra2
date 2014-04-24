#include <iostream>

using namespace std;

int main()
{
    int c,mayor,num,menor;
    mayor=0;
    c=0;
    menor=100000;
    while (c<5)
    {
        cout<<"\nIngresar un numero";
        cin>>num;
        if(num>mayor)
        {
            mayor=num;
        }
        else if(num<menor)
        {
            menor=num;

        }
        c++;

    }
    cout<<"\nEl numero mayor:   "<<mayor;
    cout<<"\nEl numero menor es :"<<menor;

    return 0;
}
