#include <iostream>

using namespace std;
int main() {

    int n;
    cin>>n;
    int temp, digit, interesen, obraten=0, brojac=0, najgolem=0;
    for(int i=1; i<n; i++)
    {
        temp = i;
        obraten = 0;
        brojac = 0;
        while(temp != 0)
        {
            digit = temp % 10;
            brojac++;
            obraten+=digit;
            temp /= 10;
            if(temp == 0)
            {
                break;
            }

            obraten = obraten * 10;
        }
        if(obraten % brojac == 0)
        {
            interesen = i;
            if(interesen > najgolem)
            {
                najgolem = interesen;
            }


        }


    }
    if(n < 10)
    {
        cout<<"Brojot ne e validen";
    }
    else
    {
        cout<<najgolem;
    }


    return 0;
}
