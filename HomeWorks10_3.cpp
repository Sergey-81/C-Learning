#include <iostream>
#include <iomanip> 
#include <Windows.h>

using namespace std;

int** create_two_dim_array(int rows, int cols) {
    int** arr = new int* [rows]; 
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols]; 
    }
    return arr;
}

void fill_two_dim_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
}

void print_two_dim_array(int** arr, int rows, int cols) {
    cout << "Таблица умножения:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(3) << arr[i][j] << " "; 
        }
        cout << endl;
    }
}

void delete_two_dim_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i]; 
    }
    delete[] arr; 
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows, cols;

    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    int** multiplication_table = create_two_dim_array(rows, cols);

    fill_two_dim_array(multiplication_table, rows, cols);

    print_two_dim_array(multiplication_table, rows, cols);

    delete_two_dim_array(multiplication_table, rows, cols);

    return 0;
}