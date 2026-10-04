#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[101] = "Alice";
    m[102] = "Bob";
    m[103] = "Charlie";

    cout << "Map: ";
    for (auto x : m)
        cout << x.first << " " << x.second << endl;

    m.insert({104, "David"});

    m.erase(102);

    cout << "\nAfter operations:" << endl;
    for (auto x : m)
        cout << x.first << " " << x.second << endl;

    cout << "\nSize: " << m.size();

    return 0;
}