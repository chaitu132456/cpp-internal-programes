#include <iostream>
using namespace std;

template <class T1, class T2>
class Sample{
    T1 a;
    T2 b;
    public:
        Sample(T1 x, T2 y){
            a = x;
            b = y;
        }
        void display(){
            cout << "First value: " << a << endl;
            cout << "Second value: " << b << endl;
        }
};

int main(){
    Sample<int, float> obj1(10, 20.5);
    Sample<string, int> obj2("Age", 18);
    cout << "Object 1:" << endl;
    obj1.display();
    cout << "\nObject 2:" << endl;
    obj2.display();
    return 0;
}