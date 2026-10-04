#include <iostream>
using namespace std;

class A{
    public:
        void showA(){
            cout << "This is class A" << endl;
        }
};

class B : public A{
    public:
        void showB(){
            cout << "This is Class B" << endl;
        }
};

class C : public B{
    public:
        void showC(){
            cout << "This is Class C" << endl;
        }
};
int main(){
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}