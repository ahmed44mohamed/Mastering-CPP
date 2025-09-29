#include <iostream>

using namespace std;

class Square {
private:
    float A, Area, Circumference;
public:
    void SetWidthAndHeight (float a) {
        A = a;
        Area = a * a;
        Circumference = a * 4;
    }

    friend class HomeWork;
};


class HomeWork {
public:
    void Print (Square square) {
        cout << "Area: " << square.Area << '\n'
            << "Circumference: " << square.Circumference << '\n';
    }
};

int main (void) {

    Square square_1;

    square_1.SetWidthAndHeight(3.0);

    HomeWork home_work;

    home_work.Print(square_1);

    return 0;

}