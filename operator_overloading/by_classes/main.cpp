#include <iostream>
#include <list>

using namespace std;

class Channels {
private:
    string Name;
    int Followers;
public:
    Channels (string name, int followers) : Name(name), Followers(followers) {}

    string GetName() const { return Name;}

    friend ostream &operator<< (ostream &out, Channels &channel);

    // friend class Collections;

    bool operator== (const Channels &channel) const {
        return this->Name == channel.Name;
    }
};

class Collections {
public:
    list<Channels> my_collection;

    void operator+= (const Channels &channel) {
        this->my_collection.push_back(channel);
    }

    void operator-= (const Channels &channel) {
        this->my_collection.remove(channel);
    }

    friend ostream &operator<< (ostream &out ,Collections &my_collection);
};

ostream &operator<< (ostream &out, Channels &channel) {

    out << "Name: " << channel.Name << '\n'
        << "Followers: " << channel.Followers << '\n';

    return out;
}

ostream &operator<< (ostream &out ,Collections &my_collection) {
    for (const Channels &channel : my_collection.my_collection) {
        out << "Name of channel is " << channel.GetName() << '\n';
    }
    return out;
}

int main (void) {

    Channels channel_1("Rab3ko", 1000000);
    Channels channel_2 ("Ahmed", 500000);
    Channels channel_3 ("Bassam", 2000000);

    // way one

    cout << channel_1 << channel_2;

    cout << "^^^^^^^^^^^^^^^^^^^^^^^\n";

    // way two
    
    operator << (cout, channel_1) << (cout, channel_2); 
    
    cout << "^^^^^^^^^^^^^^^^^^^^^^^\n";
    
    // way three
    
    operator << (cout, channel_1) << channel_2;
    
    cout << "^^^^^^^^^^^^^^^^^^^^^^^\n";

    Collections collection;

    collection += channel_1;

    collection += channel_2;

    collection += channel_3;
    
    collection -= channel_3;
    
    cout << collection;


    return 0;
}