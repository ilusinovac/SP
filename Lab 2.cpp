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
