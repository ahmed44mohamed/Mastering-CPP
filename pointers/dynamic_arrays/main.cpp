#include <iostream>

using namespace std;

int main () {

    int size;

    cout << "Size: ";
    cin >> size;

    int *arr = new int [size];

    for (int i = 0; i < size; i++) {
        cout << "Value " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        cout << "Value " << i + 1 << " is " <<  *(arr + i) << '\n';
    }

    delete []arr;
    arr = nullptr;

    return 0;
}
