#include <iostream>
using namespace std;

class Address {
public:
    string city;

    Address(string c) {
        city = c;
    }

    void display() {
        cout << "City: " << city << endl;
    }
};

class Student {
    string name;
    Address address;

public:
    Student(string n, string c) : address(c) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
        address.display();
    }
};

int main() {
    Student s("Rahul", "Hyderabad");
    s.display();

    return 0;
}