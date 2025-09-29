/*
    Void pointer ==> special type of pointer that can hold the address of a variable of any other data type
                 ==> has a limitation, and that limitation is that you can not directly dereference a void pointer
*/

#include <iostream>

using namespace std;

void Print (void *ptr, char type) {
    switch (type)
    {
    case 'i': // int
        cout << (*(int *)ptr) << '\n';
        break;
    
    case 'c': // char
        cout << (*(char *)ptr) << '\n';
        break;
    
    default:
        break;
    }
}

int main (void) {

    int num = 5;

    char letter  ='a';

    Print(&num, 'i');
    Print(&letter, 'c');

    return 0;
}