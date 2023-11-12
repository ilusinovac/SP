/*
Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. 
Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). 
Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. 
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen). 
*/

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
