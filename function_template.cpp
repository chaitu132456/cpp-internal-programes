#include <iostream>
using namespace std;
template <class T>
T maximum(T a, T b){
    if (a > b)
       return a;
    else 
       return b;
}

int main(){
    cout << "Maximum of integer: " << maximum(10, 20) << endl;
    cout << "Maximum of floats: " << maximum(12.5, 8.5) << endl;
    cout << "Maximum of characters: " << maximum('A', 'B') << endl;
    return 0;
}