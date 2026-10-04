#include <iostream>
using namespace std;

class Student {
public:
    int rollNo = 101;

protected:
    int marks = 90;

private:
    int age = 18;

public:
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;

    cout << "Public: " << s.rollNo << endl;

    s.display();

    return 0;
}