#include <iostream>

using namespace std;

int main() {
    int karta;
    cin >> karta;
    if (karta >= 999) {
        int prvbroj = karta / 100;
        int vtor = (karta / 10) % 10;
        if (prvbroj == 1) {
            if (vtor % 3 == 0) {
                cout << "VIP Posetitel na vlez 1" << endl;
            } else if (vtor % 3 == 1) {
                cout << "VIP Posetitel na vlez 2" << endl;
            } else if (vtor % 3 == 2) {
                cout << "VIP Posetitel na vlez 3" << endl;
            }
        }
        else
        {
            if (vtor % 3 == 0) {
                cout << "Posetitel na vlez 1" << endl;
            } else if (vtor % 3 == 1) {
                cout << "Posetitel na vlez 2" << endl;
            } else if (vtor % 3 == 2) {
                cout << "Posetitel na vlez 3" << endl;
            }
        }
    }
}
