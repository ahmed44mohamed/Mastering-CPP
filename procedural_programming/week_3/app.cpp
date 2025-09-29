#include <iostream>

using namespace std;

int main()
{

    /*

    operators & operands
    " Symbols To operate on Data "

    - Arithmetic operators
    " For mathematics operators "

    ---  +  => Addition
    ---  -  => Subtraction
    ---  * => Multiplication
    ---  / => Division
    ---  % => Modulo => Remainder After Division

    What Is operand ?

    -  The part of an Instruction Representing The Data Manipulated by The user
    */

    cout << 10 + 10 << "\n"; // 20

    cout << 9.5 + 10.5 << "\n"; // 20

    cout << sizeof(9.5 + 10.5) << "\n"; // double==> 8

    cout << sizeof(9.5f + 10.5f) << "\n"; // float ==> 4

    cout << (int)9.5 + (int)10.5 << "\n"; // int --> 9 + 10 = 19

    cout << sizeof((int)9.5 + (int)10.5) << "\n"; // size int => 4

    cout << int(3.5) + int(3.5) << "\n"; // int ----> 3 + 3 = 6   another way to change to integer                                                                              // Ahmed 🤷‍♂️

    cout << "\n-----------------------------------\n";

    cout << 100 - 50 << endl;

    cout << 100 - -50 << endl;

    cout << "\n-----------------------------------\n";

    cout << 10 * 5 << endl;

    cout << "\n-----------------------------------\n";

    cout << 20 / 5 << endl;

    cout << "\n-----------------------------------\n";

    cout << double(12) / double(5) << endl;

    cout << 12.f / 5.f << endl;

    cout << 12.f / 5 << endl;

    cout << "\n-----------------------------------\n";

    cout << 13 % 5 << endl;

    //   cout << 13.1 % 5 << endl;   👈   // problem    [ % ]  Just accept  integer in python no problem

    cout << "\n=================================================================25===========================================================================================\n";

    // Video 25 ==> Operators - Assignments operators

    int a = 10;

    a = a + 10;

    a += 10;

    cout << a << endl;

    cout << "\n-------------------------------------\n";

    int b = 10;

    b -= 10;

    cout << b << endl;

    cout << "\n-------------------------------------\n";

    int c = 10;

    c *= 2;

    cout << c << endl;

    cout << "\n-------------------------------------\n";

    int d = 10;

    d /= 2;

    cout << d << endl;

    cout << "\n-------------------------------------\n";

    int e = 10;

    e %= 3;

    cout << e << endl;

    cout << "\n=================================================================26===========================================================================================\n";

    // Increment & Decrement OPerators

    /*
    "Symbols To Operate On Data"

    - Increment And Decrement Operators
    " For incrementing And Decrementing Values "

    --- pre/post Increment
    --- pre/post Decrement
    */

    int likes = 0;

    cout << likes++ << "\n"; // 0  ==> post increment

    cout << likes << "\n"; // 1

    cout << "\n---------------------------------\n";

    int views = 0;

    cout << ++views << "\n"; // 1 ==> pre increment

    cout << views << "\n"; // 1

    cout << "\n|||||||||||||||||||||||||||||||||||||\n";

    int hair = 1000000;

    cout << --hair << "\n"; // pre decrement

    cout << "\n---------------------------------\n";

    int hair_2 = 1000;

    cout << hair_2-- << "\n"; // post decrement

    cout << hair_2 << "\n";

    cout << "\n=================================================================27===========================================================================================\n";

    // Operators - Comparison operators

    /*
    == Equal

    != Not Equal

    > Greater than

    < less Than

    >= Greater than or Equal

    <= less than or Equal
    */

    cout << (100 == 100) << "\n"; // 1 ===> True

    cout << (100000 == 100) << "\n"; // 0 ====> False

    cout << "\n-----------------------\n";

    cout << (100 != 100) << "\n"; // 0 ====> False

    cout << (100000 != 100) << "\n"; // 1 ====> True

    cout << "\n-----------------------\n";

    cout << (1000 > 100) << "\n"; // 1 ===> True

    cout << (100000 < 100) << "\n"; // 0 ====> False

    cout << "\n-----------------------\n";

    cout << (100 >= 100) << "\n"; // 1 ===> True

    cout << (100000 <= 100) << "\n"; // 0 ====> False

    cout << "\n=================================================================28===========================================================================================\n";

    // logic operators

    /*

    FOR logic between value

    -- && and

    -- || or

    -- ! Not

    */

    int age = 18;

    int points = 830;

    cout << (age > 12 && points > 500) << "\n";

    cout << "\n-------------------------------\n";

    cout << (age > 20 || points > 500) << "\n";

    cout << "\n-------------------------------\n";

    cout << (!age >= 12) << "\n"; // output = 0

    cout << !(10 == 10) << endl; // output = 0

    cout << "\n=================================================================29===========================================================================================\n";

    // operators Precedence

    /*

                    PEMDAS

👇

1.    ()
2.    ** // python 
3.    * or /
4.    + or -

-----------------------------------------------------------------------------------------

Bitwise

Spaceship operators

    */

    cout << 10 + 20 / 5 * 4 << "\n";

    //  10 + 4 * 4

    //  10 + 16

    //  26

    return 0;
}