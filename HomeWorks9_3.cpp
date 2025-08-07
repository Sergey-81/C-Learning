#include <iostream>
#include <Windows.h>

void print(const int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reverse(int arr[], size_t size) {
    for (size_t i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    size_t size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "До функции reverse: ";
    print(arr, size);

    reverse(arr, size);

    std::cout << "После функции reverse: ";
    print(arr, size);

    return 0;
}