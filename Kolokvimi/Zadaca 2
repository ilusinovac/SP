#include <iostream>
#include <cstring>

using namespace std;

bool Soglaska(char c)
{
    switch(tolower(c))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    return true;
        default:
            return false;
    }
}

int main()
{
    char niza[100];
    while(cin.get(niza,100))
    {
        for(int i=0;i< strlen(niza);i++)
        {
            if(!Soglaska(niza[i]))
            {
                cout<<niza[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
