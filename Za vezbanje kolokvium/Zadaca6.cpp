#include <iostream>

using namespace std;

int main() {
    int z, a, b;
    int brojacZ = 0;
    int Vkupno = 0;
    cin >> z;

while (true) {
        cin >> a >> b;

        if (a == 0 && b == 0) {
            break; 
        }

        Vkupno++;

        if (z == a + b) {
            brojacZ++;
        }
    }

    if (Vkupno > 0) {
        double percentage = (brojacZ * 100.0) / Vkupno;
        cout << "Vnesovte " << brojacZ << " parovi od broevi chij zbir e "<< z << endl;
        cout << "Procentot na parovi so zbir " << z <<" e " << percentage << "%" << endl;
    }

    return 0;
}
