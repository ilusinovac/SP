/*
Од стандарден влез се чита еден природен број n. 
Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. 
Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број. 
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxDelSum = 1;
    int MaxDel = 1;

    for (int i = 2; i < n; ++i) {
        int sum = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum > maxDelSum) {
            maxDelSum = sum;
            MaxDel = i;
        }
    }

    cout <<MaxDel<< endl;

    return 0;
}
