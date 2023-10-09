#include <iostream>
int tNum;

int main() {

    setlocale(LC_ALL, "Russian");

    std::cout << "Введите шестизначный номер билета: ";
    std::cin >> tNum;

    if (tNum >= 100000 && tNum <= 999999) {
        int digit1 = tNum / 100000;
        int digit2 = (tNum / 10000) % 10;
        int digit3 = (tNum / 1000) % 10;
        int digit4 = (tNum / 100) % 10;
        int digit5 = (tNum / 10) % 10;
        int digit6 = tNum % 10;

        if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
            std::cout << "Этот билет счастливый!";
        }
        else {
            std::cout << "Это обычный билет.";
        }
    }
    else {
        std::cout << "Введите шестизначный номер билета.";
    }
}