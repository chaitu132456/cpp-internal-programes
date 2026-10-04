#include <iostream>
using namespace std;
class A{
    public:
        void showA(){
            cout << "This is Class A" << endl;
        }
};

class B{
    public:
        void showB(){
            cout << "This is Class B" << endl;
        }
};

class c : public A, public B{
    public:
    void showC(){
        cout << "This is Class C" << endl;
    }
};
int main(){
    c obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}