/*
Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
*/

#include <iostream>

using namespace std;

bool ProverkaBroj(int number, int brojka) {
    while (number > 0) {
        int lastbrojka = number % 10;
        if (lastbrojka == brojka) {
            return true;
        }
        number /= 10;
    }
    return false;
}

bool Razlika(int num1, int num2) {
    while (num2 > 0) {
        int brojka = num2 % 10;
        if (ProverkaBroj(num1, brojka)) {
            return false;
        }
        num2 /= 10;
    }
    return true;
}

int minBroj(int N, int X) {
    for (int i = N - 1; i > 0; --i) {
        if (Razlika(i, X)) {
            return i;
        }
    }
}

int main() {
    int N, X;
    cin>>N>>X;

    int result = minBroj(N, X);

    if (result != -1) {
        cout << result << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
