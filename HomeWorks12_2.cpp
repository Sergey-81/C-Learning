#include <iostream>
#include <fstream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream file("in.txt");

    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл in.txt" << std::endl;
        return 1;
    }

    int n;
    if (!(file >> n)) {
        std::cout << "Ошибка чтения количества элементов" << std::endl;
        file.close();
        return 1;
    }

    if (n <= 0) {
        std::cout << "Некорректный размер массива: " << n << std::endl;
        file.close();
        return 1;
    }

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        if (!(file >> arr[i])) {
            std::cout << "Ошибка чтения элемента " << i << std::endl;
            delete[] arr;
            file.close();
            return 1;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        std::cout << arr[i];
        if (i > 0) std::cout << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    file.close();

    return 0;
}