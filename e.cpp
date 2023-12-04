#include <iostream>

int main() {
    int N;
    std::cout << "Enter the number of elements: ";
    std::cin >> N;

    int arr[N];

    std::cout << "Enter the array elements: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    int current_sum = arr[0];
    int max_sum = arr[0];
    int start_index = 0, end_index = 0;

    for (int i = 1; i < N; ++i) {
        if (current_sum < 0) {
            current_sum = arr[i];
            start_index = i;
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            end_index = i;
        }
    }

    std::cout << "Maximum subarray sum: " << max_sum << std::endl;

    double percentage = (double)(end_index - start_index + 1) / N * 100;
    std::cout << "Percentage of elements in the subarray: " << percentage << "%" << std::endl;

    return 0;
}
