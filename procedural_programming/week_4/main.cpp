#include <iostream>

using namespace std;

int main()
{

    cout << " Hello and welcome to week 5 \n ";

    cout << "\n=============================================30========================================================\n";

    /*

    Control flow

        - If condition

        Syntax : you can delete {} if you write just one line
        👇
        if ( condition Is true )
        {
            Do This
        }

    */

    int age = 18;

    if (age >= 18)
    {
        cout << "You are welcome man";
    }
    else
    {
        cout << "OOH sorry";
    }

    cout << "\n=============================================31========================================================\n";

    //                                                      Control flow - if , Else if , Else

    int age_2 = 18;

    int points = 800;

    int rank = 8;

    if (age_2 < 10)
    {
        cout << "Your age is ok";
    }
    else if (points < 500)
    {
        cout << "Your points is ok";
    }
    else if (rank < 5)
    {
        cout << "Your rank is ok";
    }
    else
    {
        cout << "End";
    }
    cout << "\n=============================================32========================================================\n";
    //                                                  Control flow - Nested if condition

    int age_3 = 18;

    int points_2 = 1500;

    if (age >= 18)
    {
        cout << "The age is ok \n ";
        if (points_2 >= 1000)
        {
            cout << " The points is ok ";
        }
    }
    cout << "\n=============================================33========================================================\n";

    //                                                  Control flow - Ternary Conditional Operator

    //                  Syntax : 👉                    ( Condition ? True : False );

    int age_4 = 18;

    cout << (age_4 < 18 ? "your age is ok\n" : " your age is not ok\n");

    string msg = age_4 < 18 ? "your age is ok\n" : " your age is not ok\n"; // assignment variable

    cout << msg << endl;

    cout << "\n=============================================34========================================================\n";
    //                                                  Control flow - Nested Ternary operators

    int age_5 = 18;

    int points_3 = 2;

    cout << (age_5 > 18 ? "Age is ok \n" : (points_3 > 10 ? "Points is ok" : "points is not ok "));

    cout << "\n=============================================35========================================================\n";

    //                                                  Condition practising - Create apps

    /*
        - Even / odd Checker
        - Find greatest number
    */

    int number_for_check;

    cout << "Enter the number here: ";

    cin >> number_for_check;

    int check = number_for_check % 2;

    if (check == 0)
    {
        cout << number_for_check << " " << " is Even \n";
    }
    else
    {
        cout << number_for_check << " " << "  is odd \n";
    }

    cout << "\n---------------------------------------\n";

    cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

    int number_1, number_2, number_3;

    cout << "Enter the first number: ";

    cin >> number_1;

    cout << "Enter the second number: ";

    cin >> number_2;

    cout << "Enter the third number: ";

    cin >> number_3;

    if (number_1 > number_2 && number_1 > number_3)
    {
        cout << "The first number is the greatest";
    }
    else if (number_2 > number_3 && number_2 > number_1)
    {
        cout << "The second number is greatest ";
    }
    else if (number_3 > number_1 && number_3 > number_2)
    {
        cout << " The third number is the greatest ";
    }
    else if (number_1 == number_2 || number_1 == number_3 || number_2 == number_3)
    {
        cout << "There are numbers is equal";
    }
    else
    {
        cout << "Something is error";
    }

    cout << "\n=============================================36========================================================\n";

    //                                                      control flow - Switch, Case

    /*

    switch just accept int and char


    */

    int days;

    cout << "choose a day from 1 to 3 ";

    cin >> days;

    switch (days) {
    case 1:
        cout << " Open from 08:00 to 10:00 ";
        break;
    case 2:
        cout << " Open from 10:00 to 01:00 ";
        break;
    case 3:
        cout << " Open from 01:00 to 3:00 ";
        break;
    default:
        cout << " End ";
    }

    //                                                      watch this

    cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";

    char goals;

    cout << "Goals= ";

    cin >> goals;

    switch (goals)
    {
    case 'a':
    case 'b':
        cout << " Amazing  ";
        break;
    case 'c':
        cout << " aaa ";
        break;
    default:
        cout << "End";
        break;
    }

    cout << "\n-------------------------------------------\n";

    int goals_1;

    cout << "Goals= ";

    cin >> goals_1;

    switch (goals_1)
    {
    case 1:
    case 2:
        cout << " Amazing  ";
        break;
    case 3:
        cout << " aaa ";
        break;
    default:
        cout << "End";
        break;
    }

    cout << "\n=============================================37========================================================\n";


    return 0;
}