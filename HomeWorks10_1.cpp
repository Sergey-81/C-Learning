#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; ++i) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Введённый массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}