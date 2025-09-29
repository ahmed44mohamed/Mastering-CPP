/*
    In C++, a struct (structure) is a user-defined data type that groups together variables under a single name.
    These variables, called members, can be of different types. Structs are commonly used to represent objects or
    entities with multiple attributes. By default, members of a struct have public access, meaning they can be accessed
    directly from outside the struct. Structs help organize and manage related data efficiently, making code easier to read and maintain.
*/

#include <iostream>

using namespace std;

struct Student {
    string Name;
    double GPA;
    bool Enrolled;
    Student (string name = "", double gpa = 0, bool enrolled = false) : Name(name), GPA(gpa), Enrolled(enrolled) {}
};

int main() {

    Student student_1;
    student_1.Name = "Ahmed";
    student_1.GPA = 3.45;
    student_1.Enrolled = true;

    cout << student_1.Name << '\n';
    cout << student_1.GPA << '\n';
    cout << student_1.Enrolled << '\n';

    Student student_2("Bassam", 3.9, true);

    return 0;
}