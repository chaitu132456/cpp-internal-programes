#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    try {
        if (choice == 1)
            throw 10;
        else if (choice == 2)
            throw 10.5;
        else
            throw "Invalid choice";
    }
    catch (int x) {
        cout << "Integer Exception: " << x;
    }
    catch (double x) {
        cout << "Double Exception: " << x;
    }
    catch (const char* x) {
        cout << "String Exception: " << x;
    }

    return 0;
}