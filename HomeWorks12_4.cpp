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

    int rows, cols;
    if (!(file >> rows >> cols)) {
        std::cout << "Ошибка чтения размеров массива" << std::endl;
        file.close();
        return 1;
    }

    if (rows <= 0 || cols <= 0) {
        std::cout << "Некорректные размеры массива: " << rows << "x" << cols << std::endl;
        file.close();
        return 1;
    }

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!(file >> arr[i][j])) {
                std::cout << "Ошибка чтения элемента [" << i << "][" << j << "]" << std::endl;

                for (int k = 0; k <= i; k++) {
                    delete[] arr[k];
                }
                delete[] arr;
                file.close();
                return 1;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            std::cout << arr[i][j];
            if (j > 0) std::cout << " ";
        }
        if (i < rows - 1) std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    file.close();
    return 0;
}