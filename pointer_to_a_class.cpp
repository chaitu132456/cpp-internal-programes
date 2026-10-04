#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    void display() {
        cout << "Marks: " << marks;
    }
};

int main() {
    Student s;
    Student *ptr = &s;

    ptr->marks = 90;
    ptr->display();

    return 0;
}