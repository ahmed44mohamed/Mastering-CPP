#include <iostream>

#include <array>

#include <string.h> //      or <cstring>

using namespace std;

int main()
{

    cout << "\n==========================================================38==================================================================\n";

    //                                                                  Array - What is array ?

    /*
        - What is array ?
            --- Collection of Elements of The Same type
            --- Placed in contiguous Memory Locations
            --- Reference By index started from 0
    */

    int nums[4] = {100, 200, 300, 400};

    cout << sizeof(int) << endl; // 4

    cout << sizeof(nums) << endl; // 4 * 4 = 16

    cout << "\n---------------------------------------------------------------\n";

    double nums_1[3] = {100.1, 200.2, 300.3};

    cout << sizeof(double) << endl; // 8

    cout << sizeof(nums_1) << endl; // 8 * 3

    cout << "\n---------------------------------------------------------------\n";

    //                      you can delete (=)  and number in [] look at this 👇

    int numbers[]{1, 2, 3};

    cout << "\n---------------------------------------------------------------\n";

    string names[]{"Ahmed", "Mohamed", "Amr", "Abdel rahman"};

    cout << sizeof(string) << endl;

    cout << sizeof(names) << endl;

    cout << "\n------------------------------------------------------------------\n";

    char characters[]{'A', 'B'};

    cout << sizeof(char) << endl; // 1

    cout << sizeof(characters) << endl; // 1 * 2

    cout << "\n==========================================================39==================================================================\n";

    //                                                                Array - Access Elements & location

    int numbers_1[]{1, 2, 3, 4, 5};

    cout << "First Element: " << numbers_1[0] << "\n";

    cout << "Last Element: " << numbers_1[4] << "\n";

    cout << "\n-------------------------------------------------------------\n";

    cout << "Location 1:" << &numbers_1[0] << "\n";

    cout << "Location: 2" << &numbers_1[1] << "\n";

    cout << "Location: 3" << &numbers_1[2] << "\n";

    cout << "Location: 4" << &numbers_1[3] << "\n";

    cout << "Location: 5" << &numbers_1[4] << "\n";

    cout << "\n==========================================================40==================================================================\n";

    //                                                                Array - Add & update Elements

    int numbers_array[4];

    numbers_array[3] = 400;

    numbers_array[2] = 300;

    numbers_array[0] = 100;

    numbers_array[1] = 200;

    cout << " Element 1: " << numbers_array[0] << endl;

    cout << " Element 2: " << numbers_array[1] << endl;

    cout << " Element 3: " << numbers_array[2] << endl;

    cout << " Element 4: " << numbers_array[3] << endl;

    cout << "\n-----------------------------------------\n";

    int anums[] = {10, 20, 30, 40, 50};

    cout << "Array Elements Count IS " << sizeof(anums) / sizeof(anums[2]); // 20 / 4 = 5

    cout << "\n==========================================================41==================================================================\n";

    //                                                              Array - Two Dimensional Array

    int points_a[3] = {1, 2, 3};

    int points_b[3] = {4, 5, 6};

    int points_c[3] = {7, 8, 9};

    int points[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << points[1][2] << endl; // 6

    cout << points[2][0] << endl; // 7

    cout << points[2][2] << endl; // 9

    cout << points[4][3] << endl;

    //                                                                  watch this

    cout << "\n---------------------------------------------------------------------------------\n";

    int id_a[3] = {1, 2, 3};

    int id_b[3] = {4, 5, 6};

    int id_c[3] = {7, 8, 9};

    int id[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int id_place_1 = 2;

    int id_place_2 = 2;

    cout << id[id_place_1][id_place_2] << "\n";

    cout << "\n==========================================================42==================================================================\n";

    //                                                              Array - class Array

    // what you learn in previous lessons is a c style array and here is are a lot of bugs and search about it

    /*

    Template<Type , Size> Identifier;

    */

    array<int, 4> t_arr = {1, 2, 3, 4};

    cout << t_arr[1] << "\n";

    cout << t_arr.size() << endl;

    cout << "\n-----------------------------------------------------------\n";

    t_arr.fill(10);

    cout << t_arr[0] << endl;

    cout << t_arr[1] << endl;

    cout << t_arr[2] << endl;

    cout << t_arr[3] << endl;

    cout << "\n-----------------------------------------------------------\n";

    t_arr.fill('A');

    cout << t_arr[0] << endl;

    cout << t_arr[1] << endl;

    cout << t_arr[2] << endl;

    cout << t_arr[3] << endl;

    cout << "\n-----------------------------------------------------------\n";

    t_arr.fill(true);

    cout << t_arr[0] << endl;

    cout << t_arr[1] << endl;

    cout << t_arr[2] << endl;

    cout << t_arr[3] << endl;

    cout << "\n-----------------------------------------------------------\n";

    t_arr.fill(false);

    cout << t_arr[0] << endl;

    cout << t_arr[1] << endl;

    cout << t_arr[2] << endl;

    cout << t_arr[3] << endl;

    cout << "\n-----------------------------------------------------------\n";

    array<double, 3> array_4 = {1, 2, 3};

    cout << array_4[0] << endl;

    cout << "\n==========================================================43==================================================================\n";

    //                                                                Array - Methods Discussion

    array<int, 4> nums_n = {100, 200, 300, 400};

    cout << nums_n[0] << "\n"; // 100

    cout << nums_n.front() << "\n"; // 100

    cout << nums_n[3] << "\n"; // 400

    cout << nums_n.back() << "\n"; // 400

    cout << nums_n.at(2) << endl; // 300

    cout << nums_n.size() << endl; // 4

    cout << nums_n.empty() << "\n"; // to check is this empty or not

    cout << "\n==========================================================44==================================================================\n";

    //                                                                 Aray Training - Guess The number Game

    int points_ng = 0;

    int answers[3];

    int sequences[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}
    };

    cout << "Type the The Missing number In sequences: ";

    cout << "\nSequences One: 1 , 5 , 10 , 16 , ? ";

    cin >> answers[0];

    cout << "\nSequences TWo: 2, 4 , 8 , 16 , ? ";

    cin >> answers[1];

    cout << "\nSequences Three: 1 , 1 , 2 , 3 , ? ";

    cin >> answers[2];

    if (answers[0] == sequences[0][4])
    {
        points_ng++;
    }

    if (answers[1] == sequences[1][4])
    {
        points_ng++;
    }

    if (answers[2] == sequences[2][4])
    {
        points_ng++;
    }

    cout << "Your score: " << points_ng;

    cout << "\n==========================================================45==================================================================\n";

    //                                                               String - What is a string

    cout << "Iam dragon\n"; // 12  as \0 ==> Null

    char name_a[] = "Ahmed";

    cout << name_a << "\n";

    cout << sizeof(name_a) << "\n";

    cout << name_a[0] << endl;

    cout << name_a[4] << endl;

    cout << "\n-------------------------------------------\n";

    char name_b[] = {'A', 'h', 'm', 'e', 'd', '\0'};

    cout << name_b << "\n";

    cout << sizeof(name_b) << "\n";

    cout << name_b[0] << endl;

    cout << name_b[4] << endl;

    cout << "\n-------------------------------------------\n";

    string name_c = "Ahmed";

    cout << name_c << "\n";

    cout << sizeof(name_c) << "\n"; // There are deffireent here in vs community it will be  40

    cout << name_c[0] << "\n";

    cout << name_c[5] << "\n";

    cout << "\n==========================================================46==================================================================\n";

    //                                                                  String - Concatenation


    cout << "\n--------------------------------------------------------------------------\n";

    string f_name = "Ahmed ";

    string l_name = "Mohamed";

    cout << f_name + l_name << endl;

    cout << f_name.append(l_name) << "\n";

    return 0;
}