#include <iostream>
#include <string>
#include <list>

using namespace std;


struct Channels {
    string Name;
    int Followers;
    Channels (string name, int followers) : Name(name), Followers(followers) {}
    bool operator== (const Channels &channel) const{

        return this->Name == channel.Name;
    }
};

struct Collections {
    list<Channels> collections;

    void operator+= (const Channels &channel) { this->collections.push_back(channel); }
    void operator-= (const Channels &channel) { this->collections.remove(channel);}
};

ostream &operator<< (ostream &out,const Channels &channels) {

    out << "Name: " << channels.Name << '\n'
        << "Number of followers: " << channels.Followers;
    
    return out;
}

ostream &operator<< (ostream &out,const Collections &my_collection) {
    
    for (const Channels &channel : my_collection.collections) {
        out << "Name of the channel: "  <<  channel.Name << '\n';
    }
    
    return out;
}

int main (void) {

    Channels channel_1("Rab3ko", 1000000);
    Channels channel_2 ("Ahmed", 500000);
    Channels channel_3 ("Bassam", 2000000);

    // way one

    cout << channel_1 << channel_2;

    cout << "\n^^^^^^^^^^^^^^^^^^^^^^^\n";

    // way two
    
    // operator << (cout, channel_1) << (cout, channel_2); 
    
    cout << "^^^^^^^^^^^^^^^^^^^^^^^\n";
    
    // way three
    
    // operator << (cout, channel_1) << channel_2;
    
    cout << "^^^^^^^^^^^^^^^^^^^^^^^\n";

    Collections collection;

    collection += channel_1;
    collection += channel_2;
    collection += channel_3;
    collection -= channel_3;

    cout << collection;
    
    return 0;

}