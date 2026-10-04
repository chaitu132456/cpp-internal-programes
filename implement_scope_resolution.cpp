#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student();

    void display();
};

Student::Student() {
    marks = 90;
}

void Student::display() {
    cout << "Marks: " << marks << endl;
}

int main() {
    Student s;
    s.display();

    return 0;
}