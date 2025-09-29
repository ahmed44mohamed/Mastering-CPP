#include <iostream>

using namespace std;

// class for Employees
class Employee {
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
};

int main()
{

    // output for employee 1
    Employee employee_1("Ahmed", "Tesla", 35);
    employee_1.print();
    cout << string(19, '*') << "\n";

    // output for employee 2
    Employee employee_2("Mohamed", "Tesla", 40);
    employee_2.print();

    // update a value for employee 2
    employee_2.set_age(41);
    cout << "The age of employee 2 after updating is: " << employee_2.get_age() << endl;

    Employee employee_3("Fday", "WE", 50);
    employee_3.print();

    return 0;
}