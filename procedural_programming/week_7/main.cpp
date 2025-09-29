#include <iostream>

#include <cmath>

#include <cctype> // tolower ,  toupper

#include <algorithm>

using namespace std;

void say_hello(string msg, string name, int age)
{
    cout << msg << " " << name << "👋\n ";
    cout << name << "\'s age is: " << age << "\n";// tolower ,  toupper
}

void ice_box(string item, string action)
{

    if (item == "Coca cola") {
        cout << item << action;
    }

    else if (item == "Apple" || item == "Juice") {
        cout << item << action;
    }

    else
    {
        cout << item << action;
    }
}


void calcs(int num1, int num2, string op)
{
    if (op == "+")
    {
        cout << num1 << " + " << num2 << " = ";

        cout << num1 + num2 << endl;
    }

    else if (op == "-")
    {
        cout << num1 << " - " << num2 << " = ";

        cout << num1 - num2 << endl;
    }

    else if (op == "*")
    {
        cout << num1 << " x " << num2 << " = ";

        cout << num1 * num2 << endl;
    }

    else if (op == "/")
    {
        cout << num1 << " / " << num2 << " = ";

        cout << num1 / num2 << endl;
    }
    else if (op == "%")
    {
        cout << num1 << " % " << num2 << " = ";

        cout << (int)num1 % (int)num2 << endl;
    }
    else
    {
        cout << " Is Invalid ";
    }
}

void details(string msg = "Welcome", string name = "Unknown")
{

    cout << msg << " " << name << endl;
}

void change(int nums[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += nums[i];
    }

    cout << "Result is: " << result << endl;

    return; // Work as break

    cout << "Will Not show because it is after return \n";
}

int number_return(int n1, int n2)
{
    cout << "Operation is Done" << endl;

    return n1 + n2;
    cout << "Will Not show\n"; // because it is after return 👈
}

int forward_function(int a, int b); // Forward Declaration without the Body

void print(int a, int b)
{
    cout << "Number one " << a << "\n"
        << "Number Two " << b << "\n";
}

void print(int a, int b, int c)
{
    cout << "Number one " << a << "\n"
        << "Number Two " << b << "\n"
        << "Number Three " << c << "\n";
}

void print(string a, string b)
{
    cout << "Text one " << a << "\n"
        << "Text Two " << b << "\n";
}

void print(string a, int b)
{
    cout << "Text  " << a << "\n"
        << "Number is: " << b << "\n";
}

int add(int num)
{

    if (num == 0)
    {
        return 0;
    }
    return num + add(num - 1);
}

int main()
{

    cout << "\n=====================================55===============================================\n";

    //                                          Function - Introduction

    /*
    Two types of Functions:
    1. Built in or stander function
    2. User define function

    syntax:
    return.datatype. function.name(param1, param2, param3)
    {
            function body contain block of code
    }
    */

    cout << "\n=====================================56===============================================\n";

    //                                          Function with parameters

    /*
        parameters & Arguments
    */

    say_hello("Hello", "Ahmed", 18);
    say_hello("Welcome", "Mohamed", 66);
    say_hello("Hi", "Sayed", 70);

    cout << "\n=====================================57===============================================\n";

    //                                          Function with parameters Training

    ice_box("Coca Cola", " Will be more cold\n");
    ice_box("Apple", " Will be more fresh\n");
    ice_box("Juice", " Will be more fresh\n");
    ice_box("Tv remote", "Is Invalid\n");

    cout << "-------------\n";

    calcs(10, 10, "*");
    calcs(10, 10, "+");
    calcs(10, 10, "-");
    calcs(10, 10, "/");

    cout << "\n=====================================58===============================================\n";

    //                                          Function parameter Default Value

    details("Hi", "Ahmed");
    details("Hello");
    details();

    cout << "\n=====================================59===============================================\n";

    //                                          Function - passing Array As Parameter

    int numbers[] = {10, 20, 30, 40, 50, 217};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    change(numbers, size);

    cout << "\n=====================================60===============================================\n";

    //                                          Function - return Statement

    number_return(10, 20) + 10; // 30 + 10 = 40

    cout << number_return(10, 20) + 10 << endl; // 40

    int result = number_return(10, 20); // 30

    cout << result * 2 << endl; // 60

    cout << result + 40 << endl; // 100

    cout << "\n=====================================61===============================================\n";

    //                                          Function - Forward Declaration

    cout << forward_function(1, 1) << endl;

    cout << "\n=====================================62===============================================\n";

    //                                         Built-In Function - Math function

    /*
    Function Math
    - pow
    - fmod
    - ceil
    - floor
    - round
    - trunc
    */

    cout << pow(2, 3) << endl; // 2 power 3 = 8

    cout << 2 * 2 * 2 << endl; // explan pow

    cout << "\n-------------\n";

    cout << fmod(11, 2) << endl; // 1

    cout << 11 % 2 << "\n"; // explan fmod

    cout << fmod(11.5, 2) << endl; 

    cout << "\n-------------\n";

    cout << ceil(9.1) << endl    // 10  near to up number
         << floor(9.9) << endl   // 9  near to down number
         << round(9.4) << endl   // 9   5 > number after point so it will be 10
         << round(9.8) << endl   // 10 5 < number after point so it will be 9
         << round(9.49) << endl; // 9 not matter if there two number after point or more  [ just one number after point ]

    cout << "\n-------------\n";

    cout << trunc(9.1) << endl  // 9    remove number after point dont care if it < or > 5
         << trunc(9.5) << endl  // 9
         << trunc(9.9) << endl; // 9

    cout << "\n-----------------\n";

    cout << sin(30 * M_PI / 180) << endl; // 0.5        M_PI = 3.14159

    cout << cos(60 * M_PI / 180) << endl; // 0.5

    cout << tan(45 * M_PI / 180) << endl; // 1

    cout << "\n----------------\n";

    cout << asin(0.5) * 180 / M_PI << endl; // 30

    cout << acos(0.5) * 180 / M_PI << endl; // 60

    cout << atan(1) * 180 / M_PI << endl; // 45

    cout << "\n-------------------------\n";

    cout << atan2(1, 1) * 180 / M_PI << endl;

    cout << "\n\n\n\n\n\n\n\n"; // Just for spaces in the output window

    cout << "\n=====================================63===============================================\n";

    //                                         Built-In Function Training - create two apps

    cout << "a\n"; //       a

    cout << tolower('A') << "\n"; //  ASCII value = 97

    cout << (char)tolower('A') << endl; // a

    cout << char(97) << endl; //            a

    cout << "-------------------------------\n";

    cout << "B\n"; //   B

    cout << toupper('b') << "\n"; //  ASCII value = 98

    cout << (char)toupper('b') << endl; // B

    cout << char(66) << endl; //   B

    cout << "-------------------------------\n";

    string name_one = "AHMed";

    for (int i = 0; i < 6; i++)
    {
        if (isupper(name_one[i]))
        {
            cout << (char)tolower(name_one[i]);
        }
        else
        {
            cout << (char)toupper(name_one[i]);
        }
    }

    string name_10 = "AHMed";

    for (int i = 0; i < 6; i++)
    {
        if (islower(name_one[i]))
        {
            cout << (char)toupper(name_one[i]);
        }
        else
        {
            cout << (char)tolower(name_one[i]);
        }
    }

    cout << "\n-------------------------------\n";

    string name_two = "A \n \t  h  me   \t  \r jjj  d";

    int size_name_two = name_two.size();

    for (int i = 0; i < size_name_two; i++)
    {
        if (isspace(name_two[i]))
        {
            continue;
        }
        else
        {
            cout << name_two[i];
        }
    }

    cout << "\n=====================================64===============================================\n";

    //                                         Built-In Function Training - create Three apps

    /*
        min
        max
        count
    */

    cout << min(10, -20) << endl;  // -20
    cout << min(10, 20) << endl;   // 10
    cout << min('a', 'b') << endl; // a
    cout << min('a', 'B') << endl; // B
    cout << (int)'a' << endl       // 97
         << (int)'B' << endl;      // 66
    cout << min({1, 30, 40, 731, 89, -783, 7317, 783186, 9813, 79137}) << "\n";
    cout << min({"zaid", "cristiano", "hoo", "A", "Abdo"}) << "\n"; // choose depend on  location in RAM
    cout << min({string("Mohamed"), string("Ahmed"), string("Zahra")});

    cout << "\n-------------------------\n";

    cout << max(10, -20) << endl;                                                  // 10
    cout << max(10, 20) << endl;                                                   // 20
    cout << max('a', 'b') << endl;                                                 // b
    cout << max('a', 'B') << endl;                                                 // a
    cout << (int)'a' << endl                                                       // 97
         << (int)'B' << endl;                                                      // 66
    cout << max({1, 30, 40, 731, 89, -783, 7317, 785563186, 9813, 79137}) << "\n"; // 78553186
    cout << max({"zaid", "cristiano", "hoo", "Abdo"}) << "\n";                     // choose depend on location in RAM
    cout << max({string("Mohamed"), string("Ahmed"), string("Zahra")}) << endl;    // zahra

    int nums_one[] = {1, 20, -30, 100, -400, 700, -220, 1000};
    int size_nums_one = sizeof(nums_one) / sizeof(nums_one[0]);

    int check_nums_one = 0; // any number that is not matter

    for (int i = 0; i < size_nums_one; i++)
    {
        if (nums_one[i] < check_nums_one)
        {
            check_nums_one = nums_one[i];
        }
    }
    cout << check_nums_one << "\n";


    cout << "\n|||||||||||||||||||||||||||||||||||||||||\n";

    int nums_two[] = {3, 7, 6, 6, 7, 7, 8, 7};
    int size_two = sizeof(nums_two) / sizeof(nums_two[0]); // c++ 11
    int size22 = std::size(nums_two);                      // c++ 17 just another way
    int count = 0;

    for (int j = 0; j < size22; j++)
    {
        if (nums_two[j] == 7)
        {
            count++;
        }
    }
    cout << count << "\n";

    cout << "\n=====================================65===============================================\n";

    //                                          Function Overloading

    /*
    must be different count of parameters or different data type of parameters
    */

    print(10, 20);

    print(100, 200, 300);

    print("Hello", "World");

    print("Hello", 100);

    cout << "\n=====================================66===============================================\n";

    //                            Recursion Function 

    cout << add(5);

    /*

    5 + 4

    5 + 4 + 3

    5 + 4 + 3 + 2

    5 + 4 + 3 + 2 + 1

    5 + 4 + 3 + 2 + 1 + 0

    5 + 4 + 3 + 2 + 1 + 0 = 15

    */

    return 0;
}

int forward_function(int a, int b)
{
    return a + b;
}