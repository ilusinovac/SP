/*
Да се напише програма која вчитува од стандарден влез должина на катетите (цели броеви) на еден триаголник.
Ваша задача е да ги пресметате и испечатите
*/

#include <iostream>

using namespace std;

int main()
{
    int katetaa,katetab,kh;
    double p;
    cin>>katetaa>>katetab;
    kh=katetaa*katetaa+katetab*katetab;
    p=katetaa*katetab/2.0;
    cout<<kh<<endl;
    cout<<p<<endl;
    return 0;
}
