/*
    Recursion = a programming technique where a function
                invokes itself form within
                break a complex concept into a repeatable single step

    (iterative vs recursion)

    advantages --> less code and is cleaner and useful for sorting and searching algorithms

    disadvantages --> uses more memory so slower
*/

#include <iostream>

using namespace std;


// iterative
// void walk (int steps) {
//     for (int i = 0; i < steps; ++i) {
//         cout << "You take a step!\n";
//     }
// }

// recursion
void walk (int steps) {
    if (steps > 0) {
        cout << "You take a step!\n";
        walk (steps - 1);
    }
}

int Factorial (int n) {
    if (n != 0) return n * Factorial (n - 1);
    else return 1;
}


int main (void) {


    cout << Factorial (3);


    return 0;
}