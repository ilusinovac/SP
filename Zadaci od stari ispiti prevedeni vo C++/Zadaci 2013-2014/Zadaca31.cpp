#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char a;
    cin >> a;
    int cifra, deci = 0;
    int broj = 0;
    int brojac = -1;
    int brojka;

    while ((a = getchar()) != '.') {
        if (isdigit(a)) {
            int cifra = a - '0';
            if (cifra >= 0 && cifra <= 7) {
                broj = broj * 10 + cifra;
            }
        }
    }

    while (broj != 0) {
        brojka = broj % 10;
        brojac++;
        deci += brojka * pow(8, brojac);
        broj /= 10;
    }

    cout << deci << endl;

    return 0;
}
