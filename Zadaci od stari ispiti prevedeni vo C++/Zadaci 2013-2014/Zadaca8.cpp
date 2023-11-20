#include <iostream>

using namespace std;

int main()
{
    int a,digit;
    int brojac=0;
    int brojac1=0;
    int suma1=0, suma2=0;
    while(cin>>a) {
        if (isalpha(a)) {
            break;
        }
        while (a != 0)
        {
            digit = a % 10;
            if (digit % 2 == 0)
            {
                suma1 += digit;
                a /= 10;
            }
            else
            {
                suma2 += digit;
                a /= 10;
            }
        }
        if (suma2 > 5) {
            brojac++;
        }
        if (suma1 <= 5) {
            brojac1++;
        }
        cout << "Broevi pogolemi od 5 ima vkupno: " << brojac << endl;
        cout<< " Broevi pomali ili ednakvi na 5 ima vkupno: "<< brojac1 <<endl;
        suma1=0;
        suma2=0;

    }
}
