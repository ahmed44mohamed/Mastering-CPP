#include <iostream>

using namespace std;

class AbstractClass {
public:
    virtual void AskForPromotion () const = 0; // pure virtual function
};

// class for Employees
class Employee : AbstractClass {
protected:
    string name, company_name;
    int age;

public:
    // Constructor
    Employee(string name_1, string company_name_1, int age_1) {
        set_name(name_1);
        set_company_name(company_name_1);
        set_age(age_1);}
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
        cout << name << " fixed bug using " << FavProgrammingLang << '\n';
    }
};

class Teacher : Employee {
public:
    string Subject;
    void PrepareLesson() {
        cout << name << " is preparing " << Subject << " lesson\n";
    }
    Teacher (string name, string company_name, int age, string subject): Employee(name, company_name, age), Subject(subject) {}
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

    return 0;
}