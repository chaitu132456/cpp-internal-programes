#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    cout << "Deque: ";
    for (int x : dq)
        cout << x << " ";

    cout << "\nFront: " << dq.front();
    cout << "\nBack: " << dq.back();

    dq.pop_front();
    dq.pop_back();

    cout << "\nAfter deletion: ";
    for (int x : dq)
        cout << x << " ";

    cout << "\nSize: " << dq.size();

    return 0;
}