/*
    polymorphism:
        ===> Greek Word and it is a compound of (poly = many) (morph = forms).
        ===> It describe an object or method to have many forms. 
        ===> Types of Polymorphism:
                - Compile-Time Polymorphism (Static):
                    --> Function Overloading
                    --> Operator Overloading
                - Run-Time Polymorphism (Dynamic):
                    --> Achieved via Inheritance + Virtual Functions
*/

#include <iostream>

using namespace std;

class AbstractClass {
public:
    virtual void AskForPromotion () const = 0; // pure virtual function
};

// class for Employees
class Employee : AbstractClass {
protected:
    string Name, CompanyName;
    int Age;

public:
    // Constructor
    Employee (string name, string company_name, int age) : Name(name), CompanyName(company_name), Age(age) {}


    // setters 
    void set_name(string name) {
        Name = name;
    }

    void set_company_name(string name_company) {
        CompanyName = name_company;
    }
    // setter to price
    void set_age(int age) {
        if (age >= 18)
        {
            Age = age;
        }
        else
        {
            cout << "Error: Age must be greater than 18!";
        }
    }
    // Getters
    string get_name() const {
        return Name;
    }
    // getter to name company
    string get_name_company() const {
        return CompanyName;
    }
    // getter to age
    int get_age() const
    {
        return Age;
    }

    void print() {
        cout << "Name: " << Name << endl
             << "Company name: " << CompanyName << endl
             << "Age: " << Age << endl;
    }
    
    void AskForPromotion () const override {
        if (Age > 30) cout << Name << ", you can get a promotion\n";
        else cout << Name << ", NO promotion for you\n";
    }

    virtual void Work () const {
        cout << Name << " checking email\n";
    }
    
};

class Developer :public Employee {
private:
    string FavProgrammingLang;
public:
    // constructor
    Developer(string name, string company_name, int age, string fav_programming_lang)
        : Employee(name, company_name, age), FavProgrammingLang(fav_programming_lang) {}
    // setter methods
    void SetFavProgrammingLang (const string &fav_programming_lang) {FavProgrammingLang = fav_programming_lang;}
    // getter methods
    string GetFavProgrammingLang () const {return FavProgrammingLang;}
    
    void FixBug () {
        cout << get_name() << " fixed bug using " << FavProgrammingLang << '\n';
    }

    void Work () const override {
        cout << get_name() << " Writing code by using Python\n";
    }
};

class Teacher :public Employee {
public:
    string Subject;
    void PrepareLesson() {
        cout << get_name() << " is preparing " << Subject << " lesson\n";
    }
    Teacher (string name, string company_name, int age, string subject): Employee(name, company_name, age), Subject(subject) {}

    void Work () const override {
        cout << get_name() << " teaching lessons " << Subject << '\n';
    }
};

class Intern :public Employee {


public:
    Intern (string name, string company_name, int age) :Employee(name, company_name, age){}
    void Work () const override {
        cout << get_name() << " doing simple tasks\n";   
    }
};

int main() {
    Employee employee_1("Ahmed", "Tesla", 18);
    Employee employee_2("Amr", "Tesla", 40);

    employee_1.AskForPromotion();
    employee_2.AskForPromotion();

    Developer developer_1("Bassam", "Microsoft", 22, "C++");    
    developer_1.FixBug();
    developer_1.AskForPromotion();
    Teacher teacher_1("Ali", "ERU", 30, "Programming");

    teacher_1.PrepareLesson();

    cout << "-----------\n";

    Employee *employee1 = &developer_1;
    Employee *employee2 = &teacher_1;

    employee1->Work();
    employee2->Work();

    Intern intern("Abdo", "Linux", 44);
    Employee *employee3 = &intern;

    employee3->Work();

    return 0;
}