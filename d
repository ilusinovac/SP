#include <iostream>
#include <cmath> // За користење на функцијата ceil

const int MAX_N = 100; // Максимален број на низи
const int MAX_SIZE = 100; // Максимална должина на низата

// Функција за пресметување на процентот на огледални броеви
double calculateMirrorPercentage(const int arr[], int size) {
    int mirrorCount = 0;

    for (int i = 0; i < size / 2; ++i) {
        if (arr[i] == arr[size - i - 1]) {
            mirrorCount++;
        }
    }

    // Доколку низата има непарен број на елементи, средниот елемент е огледален
    if (size % 2 == 1 && arr[size / 2] == arr[size / 2]) {
        mirrorCount++;
    }

    // Пресметка на процентот
    return static_cast<double>(mirrorCount) / size * 100.0;
}

int main() {
    int n;
    std::cin >> n;

    if (n > MAX_N) {
        std::cerr << "Error: Number of arrays exceeds the maximum limit." << std::endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        int size;
        std::cin >> size;

        if (size > MAX_SIZE) {
            std::cerr << "Error: Array size exceeds the maximum limit." << std::endl;
            return 1;
        }

        int array[MAX_SIZE];

        // Вчитување на низата
        for (int j = 0; j < size; ++j) {
            std::cin >> array[j];
        }

        // Пресметка и печатење на процентот на огледални броеви
        double percentage = calculateMirrorPercentage(array, size);
        std::cout << "Array " << i + 1 << ": " << percentage << "%" << std::endl;
    }

    return 0;
}
