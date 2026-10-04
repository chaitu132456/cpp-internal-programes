#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

void multiply(int a, int b) {
    cout << "Product: " << a * b << endl;
}

int main() {
    int a, b;
    cin >> a >> b;

    add(a, b);
    multiply(a, b);

    return 0;
}