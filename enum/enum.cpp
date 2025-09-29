/*
    enum ==> enumeration
         ==> a special data type that consists of two parts:
            1. an integer value
            2. a name that is used to describe that integer
*/


#include <iostream>

using namespace std;

enum EyeColor {

    Brown, // 0
    Green, // 1
    Gray,  // 2
    Black, // 3
    Other  // 4

};

enum Days {
    Sunday, // 0
    Monday, // 1
    Tuesday = 5, // 5
    Wednesday, // 6
    Thursday, // 7
    Friday, // 8
    Saturday // 9

};

void GetEyeColorDetails (EyeColor user_eye_color) {
    switch (user_eye_color) {
    case Brown: cout << "70% of the population has brown eyes, you are so lucky\n"; break;
    case Green: cout << "Green eyes are rare, only 2% of the population has them\n"; break;
    case Gray: cout << "Gray eyes are very rare, only 1% of the population has them\n"; break;
    case Black: cout << "Black eyes are very rare, only 1% of the population has them\n"; break;
    case Other: cout << "Other eye colors are also rare, but they exist\n"; break;
    default: break;
    }
}

int main(void) {

    EyeColor my_eye_color = Black;

    cout << my_eye_color << '\n'; // 3

    Days today = Monday;
    
    cout << today << '\n'; // 1

    Days tomorrow = Friday;

    cout << tomorrow << '\n'; // 8

    int user_input;
    cout << "Type the number of your eye color (0-4):\n0: Brown, 1: Green, 2: Gray, 3: Black, 4: Other\n type what your type here: ";
    cin >> user_input;
    EyeColor user_eye_color = (EyeColor)user_input; 
    // EyeColor user_eye_color = static_cast<EyeColor>(user_input); /* ==> another way to convert */

    GetEyeColorDetails(user_eye_color);

    return 0;
}

