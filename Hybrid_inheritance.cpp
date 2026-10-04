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

class C : public A{
    public:
        void showC(){
            cout << "This is Class C" << endl;
        }
};

class D : public B, public C{
    public:
        void showD(){
            cout << "This is class D" << endl;
        }
};

int main(){
    D obj;
    
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}