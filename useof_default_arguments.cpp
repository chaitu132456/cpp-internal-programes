#include <iostream>
using namespace std;

void display(string name = "Student", int age = 18) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    display();
    display("Rahul");
    display("Rahul", 20);

    return 0;
}