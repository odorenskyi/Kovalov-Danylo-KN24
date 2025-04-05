#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, S;

    cout << "Введіть значення x, y, z: ";
    cin >> x >> y >> z;

    double denominator = y + 4 * (pow(x, 3) + cos(z));
    if (denominator == 0) {
        cout << "Помилка: знаменник виразу дорівнює нулю!" << endl;
        return 1;
    }
    if (z < 0) {
        cout << "Помилка: неможливо обчислити корінь від'ємного числа!" << endl;
        return 1;
    }

    double numerator = 2 * M_PI * pow(z, 0.25);
    double term1 = pow(z + y + z, 2);
    double term2 = sqrt(numerator / denominator);
    S = term1 - term2;

    cout << "Обчислене значення S: " << S << endl;
    
    return 0;
}
