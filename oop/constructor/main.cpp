/*
    Constructor
        - same name of class
        - Don't have a return type
        - when you create your constructor, you lose default constructor
        Types:-
            ===> Default constructor automatically made by c++
            ===> Constructor with default values you make it
            ===> Parametrized constructor
*/

#include <iostream>

using namespace std;

class User {
public:
    string FirstName, LastName, Email;
    int Age, RatesCounter;
    float *Rates;
public:
    // Constructor with default Values
    // User () {
    //     FirstName = "None";
    //     LastName = "";
    //     Email = FirstName + LastName + "@mail.com";
    //     Age = 0;

    //}

    
    // Parametrized constructor
    User (string first_name, string last_name, string email, int age) :FirstName(first_name), LastName(last_name), Email(email), Age(age) {
        RatesCounter = 2;
        Rates = new float[RatesCounter];
        Rates[0] = 4;
        Rates[1] = 7;   
    }
    
    // Copy constructor
    User (const User &original) {
        FirstName = original.FirstName;
        LastName = original.LastName;
        Age = original.Age;
        Email = original.Email;
        RatesCounter = original.RatesCounter;
        Rates = new float[RatesCounter];
        for (int i = 0; i < RatesCounter; i++) {
            Rates[i] = original.Rates[i];
        }
    }

    ~User () {
        delete []Rates;
        Rates = nullptr;
    }

    friend ostream &operator<< (ostream &out, const User &user);

};


ostream &operator<< (ostream &out, const User &user) {
        out << "Name: " << user.FirstName << ' ' << user.LastName << '\n'
            << "Email: " << user.Email << '\n'
            << "Age: " <<  user.Age << '\n';

        return out;
}

int main () {

    User user_1("Bassam", "Maged", "bassam_maged@gmail.com", 22);

    User user_2("Ahmed", "Mohamed", "ahmed@gmail.com", 18);

    cout << user_1.FirstName << '\n';
    cout << user_1.LastName << '\n';
    cout << user_1.Email << '\n';
    cout << user_1.Age << '\n';
    cout << "-----------------\n";
    cout << user_2.FirstName << '\n';
    cout << user_2.LastName << '\n';
    cout << user_2.Email << '\n';
    cout << user_2.Age << '\n';
    
    cout << "-----------------\n";

    cout << user_1 << user_2;

    User user_3(user_1);

    return 0;
}