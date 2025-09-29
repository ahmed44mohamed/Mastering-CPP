/*
    Pointers ==> Container stores an address[memory location]
             ==> has to be of the same type like the variable that is pointing to
*/

#include <iostream>

using namespace std;

int main () {

    int num = 5;

    cout << "Num: " << num << '\n'
         << "Address: " << &num << '\n';

    int *ptr = &num;

    cout << "Address by pointer: " << ptr << '\n' // same address = &num
         << "Value: " << *ptr << '\n'; 

    // change the value by using pointer

    *ptr = 10;

    cout << "Address by pointer after change: " << ptr << '\n' // same address = &num
         << "Value after change: " << *ptr << '\n' << "Also the variable become = " << num << '\n';

    return 0;
}