#include <iostream>

using namespace std;

// Class for employee

class Employee {
public:
    string name;
    string company_name;
    int age;
    void introduce_yourself()
    {
        cout << "Hi, I am " << name << " ,I worked in " << company_name << ", I am " << age << " Years old\n--------\n";
    }

    /*
        Constructor
        1. Following ==> Same name of class
        2. Don't have a return type
        3. Must be public
    */

    //              Constractcur 👇
    Employee (string name_a, string company_name_a, int age_a) {

        name = name_a;
        company_name = company_name_a;
        age = age_a;
    }
};

int main () {
    Employee employee_1 = Employee("Ahmed", "Tesla", 28);
    // employee_1.name = "Ahmed";
    // employee_1.company_name = "Tesla";
    // employee_1.age = 28;
    employee_1.introduce_yourself();
    
    Employee employee_2("Mohamed", "Google", 30);
    employee_2.introduce_yourself();

    return 0;
}