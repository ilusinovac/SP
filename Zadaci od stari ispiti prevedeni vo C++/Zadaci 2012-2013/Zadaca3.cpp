#include <iostream>

using namespace std;

bool Proverka(int num)
{
    while (num > 0)
    {
        int cifra = num % 10;
        if (cifra != 7 && cifra != 9)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int SledenSrekjen(int n)
{
    n++;

    while (!Proverka(n))
    {
        n++;
    }

    return n;
}

int main() {
    int brojka;
    cin >> brojka;

    int result = SledenSrekjen(brojka);

    cout << result << "\n";

    return 0;
}
