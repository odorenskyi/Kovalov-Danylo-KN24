#include <iostream>
#include <iomanip>

using namespace std;

void printDeveloper() {
    cout << "Прізвище та ім'я ©" << endl;
}

int evaluateExpression(char a, char b) {
    return ((static_cast<int>(a) + 1) < static_cast<int>(b)) ? 1 : 0;
}

void printNumbers(int x, int y, int z) {
    cout << "Десяткова система: " << x << " " << y << " " << z << endl;
    cout << "Шістнадцяткова система: "
         << hex << uppercase << x << " "
         << hex << uppercase << y << " "
         << hex << uppercase << z << dec << endl;
}

int main() {
    int x, y, z;
    char a, b;
    
    cout << "Введіть три числа (x, y, z) і два символи (a, b): ";
    cin >> x >> y >> z >> a >> b;

    printDeveloper();
    cout << "Результат виразу (a + 1 < b): " << evaluateExpression(a, b) << endl;
    printNumbers(x, y, z);

    return 0;
}
