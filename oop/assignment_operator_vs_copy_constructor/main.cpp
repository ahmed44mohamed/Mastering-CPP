#include <iostream>

using namespace std;

class Movie {
public:
    string Name, Genre;
    float Rating;
    int ActorCounter;
    string *Actors;

    // Parametrized constructor
    Movie (string name, string genre, float rating, int actor_count = 0, string *actors = nullptr) : Name(name), Genre(genre), Rating(rating), ActorCounter(actor_count), Actors(actors) {}

    // Default constructor
    Movie() : Name(""), Genre(""), Rating(0.0f), ActorCounter(0), Actors(nullptr) {}
    
    Movie (const Movie &original) {
        Name = original.Name;
        Genre = original.Genre;
        Rating = original.Rating;
        ActorCounter = original.ActorCounter;
        Actors = new string[ActorCounter];
        for (int i = 0; i < ActorCounter; ++i) {
            Actors[i] = original.Actors[i];
        }
    }

    ~Movie () {
        delete [] Actors;
        Actors = nullptr;
    }

    Movie &operator= (const Movie&original) {
        
        if (&original != this) {
            Name = original.Name;
            Genre = original.Genre;
            Rating = original.Rating;
            ActorCounter = original.ActorCounter;

            delete []Actors;
            Actors = new string[ActorCounter];
            for (int i = 0; i < ActorCounter; ++i) {
                Actors[i] = original.Actors[i];
            }
        }

        return *this;
    }

    void AddActor (string new_actor_name) {
        string *NewActors = new string[ActorCounter + 1];
        for (int i = 0; i < ActorCounter; ++i) {
            NewActors[i] = Actors[i];
        }

        NewActors[ActorCounter] = new_actor_name;

        delete []Actors;
        Actors = NewActors;
        ActorCounter++;
    }
    
    void PrintInfo () {
        cout << "Name: " << Name << '\n'
            << "Genre: " << Genre << '\n'
            << "Rating: " << Rating << '\n'
            << "Actors:-\n";
            
        for (int i = 0; i < ActorCounter; i++) {
            cout << Actors[i] << '\n';
        }
    }

};

int main () {

    Movie movie_1("The Dark Knight", "Action", 9.5f); // Parametrized constructor

    Movie movie_2("The Lion king", "Animated", 8.0f); // Parametrized constructor

    Movie movie_3;

    movie_3 = movie_1;

    Movie movie_4(movie_1); // copy constructor

    movie_4 = movie_2; // use assignment operator   <===>  movie_4.operator = (movie_2);

    Movie movie_5 = movie_1; // this will use copy constructor not assignment operator, when you ever creating new object doesn't matter if you put this symbol (=) or you use parentheses in both cases copy constructor will be invoked and then later when we try to change the value of that we will use assignment operator

    movie_1.AddActor("Christian Bale");

    movie_1.AddActor("Heath ledger");

    movie_1.PrintInfo();

    movie_3.PrintInfo();

    return 0;
}