#include <iostream>

using namespace std;

int global_num = 7;

void PrintNum (int my_num) {
    cout << my_num << "\n" << "Global num = " << global_num << "\n";
}

int main (void) {

    // local variable = declared inside a function or block {}
    // global variable = declared outside of all functions

    int my_num = 4;

    int global_num = 10; // use local variable before any global variable

    cout << my_num << '\n';

    PrintNum (my_num);

    cout << "Global num = " << global_num << "\n";
    
    // if you want to use global verion type ::before the name of this variable
    
    cout << "Global num = " << ::global_num << "\n";

    return 0;
}