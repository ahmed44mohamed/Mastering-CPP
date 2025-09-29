/*
    Escape Sequences Characters
        1-Special Non Printing Characters
        2-Control Printing Behaviour
        3-Start With Back Slash \
        4-Can Be inserted In Any Position
    - \n
    - \\
    - \"
    - \'
    - \t ==> Tab Equal 8 Spaces
    - \b ==> delete letter before
    - \a => Alert => Play Beep During Execution
    - \r => Carriage Return
    - \ => Continue the next line
    - \0 => NULL
***********************************************************************************************************************************************
    Data types
        -Data EXAMPLES
            --Integer ===> 5000 , 10 , -100 , 0
            --String ==> "Ahmed"
            --Boolean ==> true , false
            --float ==> 13.4 , 19.383
            --Array ==> ["Ahmed", "Mohamed", "Sayed", "Ahmed"] ==> Same data type
            --sizeof() ----> to see size
            -- & to see Location(address) in RAM

***********************************************************************************************************************************************
            Computer memory has location


        Data Sizes
            -Bit [Bi]nary Digi[t] => Store 0 or 1
            -Byte => Group of 8 Bits => Store single Character
            -kilo Byte => 1024 Bytes
            -Mega Byte => 1024 kilo Bytes
            -Giga Byte => 1024 Mega Bytes
            -Terra byte => 1024 Gigabytes

        -int => 2 or 4 Bytes
        -float => 4 Bytes  [18.5656565]  => 7 numbers
        -double => 8 Bytes [18.565656565656565]  => 15 numbers
        -Char => 1 Byte=> => true , false
***********************************************************************************************************************************************

*/

#include <iostream>

#include <limits.h> // INT_MAX AND INT_MIN

using namespace std;

int main() {

    cout << "line 1 \n";

    cout << "line 2 \n";

    cout << "line 3\\\n";

    cout << "line \"4\"\n";

    cout << "My name is \"Ahmed\"\n";

    cout << "my name is: \'Ahmed\'\n";

    cout << "line 5\n";

    cout << "line\t6\n";

    cout << "line\b7\n"; // delete letter before

    cout << "line 8\a\n";

    cout << "Ahmed\rmohamed\n";

    cout << "line"; //This is line \
    cout<<"line";

    cout << "Line one for\
    check\n";

    cout << "Line two for \
    \
    check\n";

    cout << "Line three for \
    \
    \
    check\n";

    cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";

    int num = 10;

    string name = "Ahmed";

    bool status = true;

    cout << sizeof(num) << "\n";

    cout << sizeof(name) << "\n";

    cout << sizeof(status) << "\n";

    auto num_2 = 10;

    cout << sizeof(num_2) << '\n';

    int dd = 7;

    cout << "Address: " << &dd;

    cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!2!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";

    int number_1 = 10; // [ = ] Assignment operator

    int number_2 = -10;

    int number_3 = 0;

    int number_4 = true;

    
    cout << number_1 << endl;
    
    cout << number_2 << endl;
    
    cout << number_3 << endl;
    
    cout << number_4 << endl;
    
    cout << INT_MAX << endl;
    
    cout << INT_MIN << endl;
    
    int number_5 = 12.36232;

    cout << number_5;
    
    cout << "\n********\n";

    cout << sizeof(int) << endl;

    cout << sizeof(float) << endl;

    cout << sizeof(char) << endl;

    cout << sizeof(string) << endl;

    cout << sizeof(bool) << endl;

    cout << sizeof(double) << endl;


    cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";

    double number_dob = 10;

    number_dob = 20.5;

    cout << sizeof(number_dob) << endl; // 8

    cout << number_dob << endl; // 20.5

    int number_int = 10;

    number_int = 20.5;

    cout << sizeof(number_int) << endl; // 4

    cout << number_int << endl; // 20

    cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";

    float number_fl = 40.5f + 9.5f;

    cout << sizeof(number_fl) << endl;

    cout << number_fl << endl;

    auto nnnn = 10.5f;

    cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";

    /*
                                                            Video 20
    primitive Data type
        -Char ----> Character
            -- Added Inside Single Quotes ------> Test With Auto
            --  ASCII Value
            -- ASCII ----> American Standard code for information Interchange
            -- Away of representing Characters As numbers
            -- Take 1 byte on RAM
    */

    char a = 'A';

    cout << a << endl;

    cout << sizeof(a) << endl;

    cout << "\n---------------------------------------\n";

    cout << int('P') << "\n";

    cout << "\n---------------------------------------\n";

    char u = 'U';


    cout << int(u) << "\n";

    cout << "\n---------------------------------------\n";

    cout << int('%') << "\n";

    cout << int('^') << "\n";

    cout << int('*') << "\n";

    cout << "\n---------------------------------------\n";

    cout << char(81) << '\n'; //  Output = Q

    return 0;
}