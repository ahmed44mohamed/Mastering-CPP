/*
        Three most important key words:
            - try
            - catch
            - throw
    */

#include <iostream>

using namespace std;


class Printer {
private:
    string Name;
    int AvailablePaper;

public:
    Printer (string name, int available_paper) : Name(name), AvailablePaper (available_paper) {}

    void Print (string txtDoc) {
        int required_paper = txtDoc.length() / 10;

        if (required_paper > AvailablePaper) 
            throw 101;

        cout << "Printing..." << txtDoc << '\n';

        AvailablePaper -= required_paper;

    }

};

int main (void) {

    Printer p ("DELL", 10);

    try {
    p.Print("Hello, my name is Ahmed. I am an AI Engineer");
    p.Print("Hello, my name is Ahmed. I am an AI Engineer");
    p.Print("Hello, my name is Ahmed. I am an AI Engineer");
    }
    catch (const char * txt_exception) { // You can write many catch for one try
        cerr << "Exception " << txt_exception << '\n';
    }
    catch (const int ex_code) {
        cout << "Exception " << ex_code << '\n';
    }
    // default handler --> handle any type of exception
    //                 --> would be last one
    catch (...) {
        cout << "Exception happened" << '\n';
    }

    return 0;
}