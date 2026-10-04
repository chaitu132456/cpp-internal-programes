#include <iostream>
using namespace std;

class Student {
    int rollNo;

public:
    void setRollNo(int rollNo) {
        this->rollNo = rollNo;
    }

    void display() {
        cout << "Roll No: " << this->rollNo;
    }
};

int main() {
    Student s;
    s.setRollNo(101);
    s.display();

    return 0;
}