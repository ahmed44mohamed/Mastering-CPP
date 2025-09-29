#include <iostream>

using namespace std;

class Integer {
private:

    int Num; // instance variable

    static int shared; //  static member variable

public:

    Integer () { Num = 0;}

    void set (int  num) {Num = num;}

    int get () const { return Num;}

    int getShared () const { return shared; }

    void Bump () { shared++;}

    // we can have static member function
    static void UpdateShared (int i ) { shared = i;}
    // we can use this function with no instance of Integer defined yet
    static int retrieveShred () { return shared; }
};

// definition of the static member variable out of the class

int Integer::shared = 0;



int main (void) {

    cout << Integer::retrieveShred() << '\n';

    Integer obj1, obj2;

    obj1.set(8);
    obj2.set(12);

    cout << obj1.getShared() << ", " << obj2.getShared() << endl;
    
    obj1.Bump();
    
    cout << obj1.getShared() << ", " << obj2.getShared() << endl;
    
    obj1.Bump();
    
    cout << obj1.getShared() << ", " << obj2.getShared() << endl;
    
    obj1.Bump();
    
    cout << obj1.getShared() << ", " << obj2.getShared() << endl;

    Integer obj3;

    cout << obj3.getShared();



    return 0;
}