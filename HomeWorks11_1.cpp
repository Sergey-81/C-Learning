#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string firstName, lastName;

    cout << "Введите имя: ";
    getline(cin, firstName);

    cout << "Введите фамилию: ";
    getline(cin, lastName);

    string greeting = "Здравствуйте, " + firstName + " " + lastName + "!";
    cout << greeting << endl;

    return 0;
}