#include <iostream>

using namespace std;

int main()
{
    char bukva,prethodna;
    int brojac=0;
    int max=0;
    char maxBukva;
    while(true)
    {
        cin>>bukva;
        if(bukva=='.')
        {
            break;
        }
        if(bukva == prethodna)
        {
            brojac++;
        }
        else{
            brojac=1;
        }
        if (brojac>max)
        {
            max=brojac;
            maxBukva=bukva;
        }
    prethodna=bukva;
    }
    cout << prethodna<<max<<endl;
}
