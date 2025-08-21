#include <iostream>
#include <fstream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    std::cout << "Введите размер массива: ";

    if (!(std::cin >> n) || n <= 0) {
        std::cout << "Некорректный размер массива" << std::endl;
        return 1;
    }

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "arr[" << i << "] = ";
        while (!(std::cin >> arr[i])) {
            std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
            std::cin.clear(); 
            std::cin.ignore(10000, '\n'); 
        }
    }

    std::ofstream file("out.txt");
    if (!file) {
        std::cout << "Ошибка создания файла out.txt" << std::endl;
        delete[] arr;
        return 1;
    }

    file << n << "\n"; 

    for (int i = n - 1; i >= 0; i--) {
        file << arr[i];
        if (i > 0) file << " ";
    }

    file.close();
    delete[] arr;

    std::cout << "Данные успешно записаны в файл out.txt" << std::endl;

    return 0;
}