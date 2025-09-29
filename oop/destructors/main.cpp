#include <iostream>

using namespace std;

/*
    Destructors:
        - to perform necessary cleanup tasks before an object is destroyed
        - opssite of a job of constructor

        1 ===> start with ~
        2 ===> Same name of class
        3 ===> Don't have a return type
        4 ===> Don't receive any parameters
        5 ===> need to be a member of class
        6 ===> in public area
        7 ===> you can do just only one destructor
*/
class Books {
private:
    string Title;
    string Author;
    int *Rates, RatesCounter;
public:
    Books(string title, string author, int *rates, int rates_counter) : Title(title), Author(author), Rates(rates), RatesCounter(rates_counter) {
        RatesCounter = 2;
        Rates = new int[RatesCounter];
        Rates[0] = 4;
        /*
            This code just for learn destructors, so don't care about this part of code 😅🖤
        */
        Rates[1] = 7;
    }
    ~Books() {
        // delete Rates; ===> this will just delete the address of first element
        delete [] Rates;
        Rates = nullptr;
    }
};

int main(void) {

    Books book_1("CPP", "Ahmed", 0, 0); // this object will destroyed second
    Books book_2("Python", "Bassam", 0, 0); // this object will destroyed first

    return 0;

}