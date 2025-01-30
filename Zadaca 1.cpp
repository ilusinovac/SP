#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int niza[n];
    for(int i=0;i<n;i++)
    {
        cin>>niza[i];
    }
    int najmal = niza[0];
    int najgolem = niza[0];
    for (int i = 1; i < n; i++)
    {
        if (niza[i] < najmal)
        {
            najmal = niza[i];
        }
        if (niza[i] > najgolem)
        {
            najgolem = niza[i];
        }
    }

    cout<<najmal<<endl;
    cout<<najgolem<<endl;
}