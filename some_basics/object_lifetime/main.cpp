#include <iostream>

using namespace std;

class Entity {

public:

    Entity () {
        cout << "created Entity\n";
    }

    ~ Entity () {
        cout << "destroyed Entity\n";
    }


};

int main (void) {

    {
        Entity e; // This will created and destroyed because it is in stack \
        because object in stack are destroyed when they go out of scope 

    }

    {
        Entity *e = new Entity(); // This will created not destroyed because it is in heap \
        because object in heap are not destroyed when they go out of scope
        delete e; // We need to manually delete the object to avoid memory leak
    }



    return 0;
}