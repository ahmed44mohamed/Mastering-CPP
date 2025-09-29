#include <iostream>

using namespace std;

// Template function
template <typename T>
T Add (T a, T b) {
    return a + b;
}

int main (void) {

    cout << Add(5, 7) << '\n';
    cout << Add(5.4, 7.6) << '\n';
    
    return 0;
}