#include <iostream>
#include <Windows.h>

void print(const int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arr2[] = { 6, 5, 4, 8 };
    int arr3[] = { 1, 4, 3, 7, 5 };

    print(arr1, sizeof(arr1) / sizeof(arr1[0]));
    print(arr2, sizeof(arr2) / sizeof(arr2[0]));
    print(arr3, sizeof(arr3) / sizeof(arr3[0]));

    return 0;
}