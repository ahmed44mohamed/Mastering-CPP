#include <iostream>
#include <limits.h> // For INT_MAX and INT_MIN

using namespace std;

void without_value(){


    // Nothing to return 
}

int main() {

/*
    Primitive data Type or you can say Basic Data type 
        - bool ==> Boolean  [ George Boole ] --> He made Boolean Algebra This type of Algebra use to make Various operations: like NOT , OR , AND 
            -- Only two possible Values [ true , false ]
            -- When We use Boolean Values 
                -- Anything Has     on/off,      yes/no,       true/false       0 | 1

        Void ==> Valueless
            -Without value
*/

    bool is_open = true;

    cout << is_open + 10 << "\n"; // 10 + 1 = 11

    cout << true + true + false << "\n"; // 1 + 1 + 0 = 2

    cout << " \n-----------------------------------\n";

    bool test_one = 10 > 5; // yes ==> True ==> 1

    bool test_two = 10 > 100; // No ==> False ==> 0

    cout << test_one << endl; // output ==> 1

    cout << test_two << endl; // output ==> 0

    cout << "\n-----------------------------------\n";

    int num = 44;

    cout << sizeof(test_one) <<endl; // output = 1 Byte 

    cout << sizeof(num) <<endl;  // output = 4 Bytes

    cout <<" \n------------------------------------\n";

    bool number_1 = 100, number_2 = -100,number_3 = 0;

    cout << number_1 << endl; // Eny number except 0 = true ==> 1,  [ 0 ] ==> False ==> 0, negative is true 

    cout << number_2 << endl;

    cout << number_3 << endl;
    
    //  void you can find it up 👆
    without_value ();

    cout << "\n*****************************************************************************************************************************\n";


    /*
        primitive Data Types
        - Modifiers 
                -- Modify The Length of Data => See Limits

                --- Singes [int , char]
                    ---- Store positive, Negative Integers And Zero
                    --- int IS Singed By Default 


                -- Unsigned [ int , char ]
                    Store positive Only 

                -- Short [ int ]
                    Can be short Instead of short int


                -- Long [ int, double ]
                    store Maximum value
                    Can Be Long Insread of long int
    

        - Type Alias 
            -- using identifier = type;
            -- typedef unsigned long UL;
    */

    int age = 100;

    cout << sizeof(age) << "\n"; // output = 4 Bytes 
    
    long age_3 = 60;

    cout << sizeof(age_3) << "\n";  // output = 4 Bytes

    short int new_age = 90;

    cout << sizeof(new_age) << "\n"; // output = 2 Bytes 

    short age_2 = 75;

    cout << sizeof(age_2) << "\n"; // output = 2 Bytes

    cout <<"\n----------------------------------------\n"; 

    cout << sizeof(short int) << "\n"; // output = 2 Bytes 

    cout << sizeof(short) << "\n"; // output = 2 Bytes 

    cout << sizeof(long int) << "\n"; // output = 4 Bytes 

    cout << sizeof(long) << "\n"; // output = 4 Bytes 

    cout << sizeof(long long int) << "\n"; // output = 8 Bytes 

    cout << sizeof(long long) << "\n"; // output = 8 Bytes 

    cout << "\n------------------------------------------\n";

    int number_4 = 777;

    cout << number_4 << "\n";

    signed int number_5 = 444;

    cout << number_5 << "\n";

    signed number_6 = 666;

    cout << number_6 << "\n";

    unsigned  number_7 = 555; // Can not accept negative [ - ]

    cout << number_7 << "\n";

    long long int my_number = 10019113813893;

    cout << my_number << "\n";

    cout << "\n------------------------------------------------\n";

    using big_number = long long;

    big_number my_number_2 = 1019281827;

    cout << my_number_2 << "\n";

    typedef long long ll;

    ll my_number_3 = 10130318323823;

    cout << my_number_3 << "\n";

    /*
        - Data types
            -Type Conversion
                -- Convert Data of one Type TO Another 

        - Implicit Conversion
            --Conversion is done Automatically By The Compiler

        - Explicit Conversion AKA Type Casting
            -- Conversion IS Done By the programmer

        - Data Loss
            -- When larger Type IS Converted to smaller type
    */

    cout << "\n*****************************************************************************************************************************\n";

    int aa;

    double bb = 20.5;

    aa = bb;

    cout << aa << "\n"; // 20

    cout << sizeof(aa) << "\n"; // 4

    int aaa = 152;

    double bbb;

    bbb = aaa;

    cout << bbb << "\n"; // 152

    cout << sizeof(bbb) << "\n"; // 8

    char c = 'C';

    int d = 20;

    cout << int(c) << "+" << d << " = " << c + d;

    cout << "\n------------------------------------------\n";

    int ee = 20;

    double hh =20.5;

    cout << ee + hh << "\n";

    cout << sizeof(ee + hh) << "\n"; // 8 Bytes ==> double

    cout << "\n------------------------------------------\n";

    int uy = 20;

    double hw =20.5;

    cout << uy + (int)hw << "\n"; // 20 + 20 = 40

    cout << uy + int(hw) << "\n"; // anther way

    cout << sizeof(uy + (int)hw) << "\n"; // 4 Bytes ==> int

    return 0;
}