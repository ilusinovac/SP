#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int current_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < N; ++i) {
        if (current_sum < 0) {
            current_sum = arr[i];
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    cout << "Maximum subarray sum: " << max_sum << std::endl;

    double percentage = (double)max_sum / N * 100;
    cout << "Percentage of elements in the subarray: " << percentage << "%" << std::endl;

    return 0;
}
