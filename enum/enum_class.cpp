#include <iostream>

using namespace std;

/*
    enum class:
        ===>    Introduced in C++11.
        ===>    Values ​​are confined within their own scope.
        ===>    No "automatic" conversion to/from int.
        ===>    More secure and prevents name collisions.

*/

enum class EyeColor {
    Brown,
    Green,
    Gray,
    Black,
    Other
};

void GetEyeColorDetails(EyeColor user_eye_color) {
    switch (user_eye_color) {
    case EyeColor::Brown: cout << "70% of people have brown eyes\n"; break;
    case EyeColor::Green: cout << "Only 2% have green eyes\n"; break;
    case EyeColor::Gray: cout << "Only 1% have gray eyes\n"; break;
    case EyeColor::Black: cout << "Only 1% have black eyes\n"; break;
    case EyeColor::Other: cout << "Other eye colors exist too\n"; break;
    }
}


int main (void) {

    EyeColor my_color = EyeColor::Black;

    cout << "Numeric value: " << static_cast<int>(my_color) << '\n';

    int input;
    cout << "Enter your eye color (0-4): ";
    cin >> input;

    EyeColor user_color = static_cast<EyeColor>(input);
    GetEyeColorDetails(user_color);

    return 0;
}