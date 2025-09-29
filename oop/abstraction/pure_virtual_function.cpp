#include <iostream>

using namespace std;

/*
    - virtual function:
        -- is a function that is defined in base class and it is redefined in derived class
        -- has a very specific purpose:
            --- It is give you the ability of a runtime polymorphism
*/

// base abstract class
class Instrument
{
public:
    virtual void MakeSound() const = 0;
};

// derived class
class Accordion : public Instrument
{
public:
    void MakeSound() const override
    {
        cout << "Accordion playing.....\n";
    }
};

class Pianos : public Instrument
{
public:
    void MakeSound() const override
    {
        cout << "Pianos playing.....\n";
    }
};

int main(void)
{

    Instrument *i1 = new Accordion();
    Instrument *i2 = new Pianos();


    i1->MakeSound();
    i2->MakeSound();

    Instrument *instruments[2] = {new Accordion(), new Pianos()};

    for (int i =0; i < 2; i++) {
        instruments[i]->MakeSound();
    }

    delete i1;
    delete i2;
    delete instruments[0];
    delete instruments[1];

    return 0;
}