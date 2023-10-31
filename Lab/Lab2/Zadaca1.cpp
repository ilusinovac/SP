/*
Да се напише програма која од стандарден влез чита цел број(денови). На излез да се отпечати колку години, месеци и денови се тоа.

Претпоставуваме дека сите месеци имаат 30 дена и секоја година има 365 дена.
*/

#include <iostream>

using namespace std;

int main()
{
    int denovi,godina,meseci,preostanuva;
    cin>>denovi;
    godina=denovi/365;
    preostanuva=denovi%365;
    meseci=preostanuva/30;
    denovi=preostanuva%30;

    cout<<"Years: "<<godina<<", months: "<<meseci<<", days: "<<denovi<<endl;


    return 0;
