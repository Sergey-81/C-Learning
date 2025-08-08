#include <iostream>
#include <Windows.h>

double* create_array(int size) {
    double* arr = new double[size]; 
    for (int i = 0; i < size; ++i) {
        arr[i] = 0.0;  
    }
    return arr;
}

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    double* arr = create_array(size);

    cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}