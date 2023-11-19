#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=1000;i++)
    {
        if(i%3==0 && i%5==0)
        {
            cout<<"TipTop"<<endl;
        }
        else if(i%3==0)
        {
            cout<<"Tip"<<endl;
        }
        else if(i%5==0)
        {
            cout<<"Top"<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
}
