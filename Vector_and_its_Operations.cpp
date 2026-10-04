#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";

    v.insert(v.begin() + 1, 15);

    cout << "\nAfter insertion: ";
    for (int x : v)
        cout << x << " ";

    v.erase(v.begin() + 2);

    cout << "\nAfter deletion: ";
    for (int x : v)
        cout << x << " ";

    cout << "\nSize: " << v.size();
    cout << "\nFront: " << v.front();
    cout << "\nBack: " << v.back();

    return 0;
}