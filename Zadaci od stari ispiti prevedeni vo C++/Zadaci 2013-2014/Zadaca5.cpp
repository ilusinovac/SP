#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int brojac=0, brojac1=0;
    int cifri1, cifri2;
    int suma1=0, suma2=0;
    if(a<=0 && b<=0)
    {
        cout<<"Invalid input"<<endl;
    }
    while (a != 0)
    {
        cifri1 = a % 10;
        if (brojac % 2 == 0)
        {
            suma1 += cifri1;
        }
        a /= 10;
        brojac++;
    }


        while(b!=0)
        {
            cifri2=b%10;
            suma2+=cifri2;
            b/=10;
        }
    cout<<suma1<<" Suma 1 "<<endl;
    cout<<suma2<<" Suma 2 "<<endl;
}
