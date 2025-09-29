#include <iostream>

using namespace std;


class Students {
public:
    // Data member
    string Name;
    int Age;
    char Gender;

    virtual void Study() const = 0;
};

class ProgrammingStudent : public Students {
    public:
    void Study() const {
        cout << "Learning programming\n";
    }
};

class ArtsStudent : public Students {
public:
    void Study() const {
        cout << "Learning paint\n";
    }
};

class MusicStudent : public Students {
    public:
    void Study() const {
        cout << "Learning to paly piano and to sing\n";
    }
};

class Monsters {
public:
    virtual void Attack () const = 0;
};

class Zombie : public Monsters{
public:
    void Attack () const {
        cout << "Zombie will swallow you\n";
    }
};

class Vampire : public Monsters{
public:
    void Attack () const {
        cout << "Zombie can bite you\n";
    }
};

class Dragon : public Monsters{
public:
    void Attack () const {
        cout << "Zombie will burn you with fire\n";
    }
};


int main (void) {
    
    Students *students[3];

    students[0] = new ProgrammingStudent();

    students[1] = new ArtsStudent();

    students[2] = new MusicStudent();

    for (int i = 0; i < 3; i++) {
        students[i]->Study();
        delete students[i];
    }

    cout << "\n---------------------------------\n\n";
    
    Monsters *monster[3];

    monster[0] = new Zombie();

    monster[1] = new Vampire();

    monster[2] = new Dragon();

    for (int i = 0; i < 3; i++) {

        monster[i]->Attack();
        delete monster[i];
    }

    return 0;
}