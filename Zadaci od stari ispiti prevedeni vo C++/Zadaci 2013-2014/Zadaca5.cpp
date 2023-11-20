#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,cifra;
    int temp1=0,at=0;
    int brojac=1, suma=0, suma2=0;
    int min=0, max=0;
    while(cin>>a)
    {
        if(isalpha(a))
        {
            break;
        }
        temp1=a;
            while(a!=0)
            {

                cifra=a%10;
                if(brojac%2==0)
                {
                    suma+=cifra;
                }
                    a/=10;
                    brojac++;
            }
            if(suma2!=0)
            {
                if(suma>suma2)
                {
                    min=at;
                    max=temp1;
                }
                else
                {
                    min=temp1;
                    max=at;
                }

                cout<<"Najgolemata suma e "<<max<<" a najmalata e: "<<min;
            }
            at=temp1;
        suma2=suma;
        brojac=1;
        suma=0;
    }
}
