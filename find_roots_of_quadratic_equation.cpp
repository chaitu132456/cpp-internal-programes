#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, r1, r2;

    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        cout << "Roots are real and different" << endl;
        cout << "Root 1: " << r1 << endl;
        cout << "Root 2: " << r2 << endl;
    }
    else if (d == 0) {
        r1 = -b / (2 * a);

        cout << "Roots are real and equal" << endl;
        cout << "Root 1: " << r1 << endl;
        cout << "Root 2: " << r1 << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);

        cout << "Roots are complex" << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}