#include <iostream>

using namespace std;

/*
    abstraction:
        ===> concept of hiding the complex implementation details of a system and showing only the essential features to the user.
*/

class AbstractClass {
public:
    virtual void AskForPromotion () const = 0; // pure virtual function
};

// class for Employees
class Employee : AbstractClass {
private:
    string name, company_name;
    int age;

public:
    // Constructor
    Employee(string name_1, string company_name_1, int age_1) {
        set_name(name_1);
        set_company_name(company_name_1);
        set_age(age_1);
    }
    void print() {
        cout << "Name: " << name << endl
             << "Company name: " << company_name << endl
             << "Age: " << age << endl;
    }

    // setters 
    void set_name(string name_set) {
        name = name_set;
    }

    void set_company_name(string name_company_set) {
        company_name = name_company_set;
    }
    // setter to price
    void set_age(int set_age) {
        if (set_age >= 18)
        {
            age = set_age;
        }
        else
        {
            cout << "Error: Age must be greater than 18!";
        }
    }
    // Getters
    string get_name() const {
        return name;
    }
    // getter to name company
    string get_name_company() const {
        return company_name;
    }
    // getter to age
    int get_age() const
    {
        return age;
    }
    void AskForPromotion () const override {
        if (age > 30) cout << name << ", you can get a promotion\n";
        else cout << name << ", NO promotion for you\n";
    }
};

int main() {
    Employee employee_1("Ahmed", "Tesla", 18);
    Employee employee_2("Mohamed", "Tesla", 40);

    employee_1.AskForPromotion();
    employee_2.AskForPromotion();

    return 0;
}