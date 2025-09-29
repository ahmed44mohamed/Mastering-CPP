#include <iostream>

using namespace std;

class Square {
private:
    // Data member
    float A, Area, Circumference;

public:
    void SetWidthAndHeight (float a) {
        A = a;
        // calculate area and circumference
        Area = a * a;
        Circumference = a * 4;
    }

    friend void PrintArea (Square square);
    friend void PrintCircumference (Square square);
};

void PrintArea (Square square) {
    cout << "Area: " << square.Area << '\n';
}

void PrintCircumference (Square square) {
    cout << "Circumference: " << square.Circumference << '\n';
}

int main (void) {

    Square square_1;

    square_1.SetWidthAndHeight(3.0);

    PrintArea(square_1);
    PrintCircumference(square_1);

    return 0;

}