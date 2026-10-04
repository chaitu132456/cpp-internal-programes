#include <iostream>
using namespace std;

class Sample {
    int a;

public:
    Sample(int x) {
        a = x;
    }

    friend void display(Sample obj);
};

void display(Sample obj) {
    cout << "Value: " << obj.a;
}

int main() {
    Sample obj(10);
    display(obj);

    return 0;
}