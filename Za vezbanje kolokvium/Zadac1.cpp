#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
    
    int NajMal = -1; 

    for (int i = m; i <= n; ++i) {
        int num = i;
        bool Blag = true;

        while (num > 0) {
            int broj = num % 10;
            if (broj % 2 != 0) {
                Blag = false;
                break;
            }
            num /= 10;
        }

        if (Blag) {
            NajMal = i;
            break; 
        }
    }

    if (NajMal != -1) {
        cout << NajMal << endl;
    } else {
        cout << "NE" << endl;
    }

    return 0;
}
