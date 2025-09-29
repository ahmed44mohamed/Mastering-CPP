
// for definition

#include "log.hpp"

#include <iostream>



void Log (const char *msg) { std::cout << msg << '\n';}


void Initlog () { Log ("Initializing Log"); }