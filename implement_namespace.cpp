#include <iostream>
using namespace std;

namespace First {
    int value = 10;

    void display() {
        cout << "First Namespace: " << value << endl;
    }
}

namespace Second {
    int value = 20;

    void display() {
        cout << "Second Namespace: " << value << endl;
    }
}

int main() {
    First::display();
    Second::display();

    return 0;
}