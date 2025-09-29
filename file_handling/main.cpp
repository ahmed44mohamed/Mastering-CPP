#include <iostream>
#include <fstream>

using namespace std;

int main (void) {

    fstream MyFile;

    MyFile.open("info.txt", ios::out); // write mode
    if (MyFile.is_open()) {
        MyFile << "Hello\n";
        MyFile << "Second line\n";
        MyFile.close();
    }
    
    MyFile.open("info.txt", ios::app); // append
    if (MyFile.is_open()) {
        MyFile << "Hello2\n";
        MyFile.close();
    }

    MyFile.open("info.txt", ios::in); // read mode
    if (MyFile.is_open()) {
        string lines;
        while (getline(MyFile, lines)) {
            cout << lines << endl;
        }
        MyFile.close();
    }

    return 0;
}