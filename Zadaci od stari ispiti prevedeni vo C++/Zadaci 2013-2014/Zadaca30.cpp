#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>2)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                {
                    cout<<"*";
                }
                else if(i==1 || i==n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<"+";
                }
            }
            cout<<endl;
        }
    }
}
