#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //////////////// задача 3 ///////////////////

    const int rows = 3;
    const int cols = 6;
    int array[rows][cols] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };

    std::cout << "Массив:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << "\t";
        }
        std::cout << "\n";
    }

    int min_i = 0, min_j = 0;
    int max_i = 0, max_j = 0;
    int min_value = array[0][0];
    int max_value = array[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] < min_value) {
                min_value = array[i][j];
                min_i = i;
                min_j = j;
            }
            if (array[i][j] > max_value) {
                max_value = array[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    std::cout << "Индекс минимального элемента: " << min_i << " " << min_j << " = " << min_value << "\n";
    std::cout << "Индекс максимального элемента: " << max_i << " " << max_j << " = " << max_value << "\n";

}
