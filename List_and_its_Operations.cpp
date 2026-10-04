#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    cout << "List: ";
    for (int x : l)
        cout << x << " ";

    l.insert(next(l.begin(), 2), 15);

    cout << "\nAfter insertion: ";
    for (int x : l)
        cout << x << " ";

    l.remove(20);

    cout << "\nAfter deletion: ";
    for (int x : l)
        cout << x << " ";

    l.sort();

    cout << "\nAfter sorting: ";
    for (int x : l)
        cout << x << " ";

    cout << "\nSize: " << l.size();

    return 0;
}