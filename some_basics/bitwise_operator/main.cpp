#include <iostream>
using namespace std;

int main (void) {

    /*
        Bitwise operator

        Bit ==> 0 , 1

        &  : AND
        |  : OR
        ^  : XOR  ===> One of them not both
        ~  : NOT
        << : Left Shift
        >> : Right Shift
    */

    int a = 5, b = 3;

    // & --> AND
    cout << "And: " << (a & b) << '\n'; // 0101 & 0011 = 0001 = 1

    // | --> OR
    cout << "OR: " << (a | b) << '\n'; // 0101 | 0011 = 0111 = 7

    // ^ --> XOR
    cout << "XOR: " << (a ^ b) << '\n'; // 0101 ^ 0011 = 0110 = 6

    // ~ : NOT
    cout << "NOT: " << ~a << '\n'; // ~a = -(a + 1)

    /*
        0000-0000-0000-0000-0101 --> This positive number
        1111-1111-1111-1111-1010 --> This negative number
        0000-0000-0000-0000-0101 --> 1's complement
                               1 +
        0000-0000-0000-0000-0110 --> 2's complement = 6
    */

    // << : Left Shift
    cout << "Left shift: " << (a << 1) << '\n'; // a << n  ⇨  a * (2^n)

    /*
        0000-0000-0000-0000-0101
        0000-0000-0000-0000-1010
    */

    // >> : Right Shift 
    a = 10;
    cout << "Right shift: " << (a >> 1) << '\n'; // a >> n = a / (2^n) = 10 / 2 = 5

    /*
        0000-0000-0000-0000-1010  // 10
        0000-0000-0000-0000-0101  // 5
    */

    return 0;
}
