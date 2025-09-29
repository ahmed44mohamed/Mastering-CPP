#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

int calc(vector<int> nums_vector)
{
    int result = 0;
    for (int i = 0; i < nums_vector.size(); i++)
    {
        result += nums_vector[i];
    }
    return result;
}

int main() {

    cout << "\n==================67==================\n";
    /*
        - What is vectors ?
        - Vector is a container for similar data like Array
        - Vectors are Dynamic Arrays ==> Array That can In size
        - Vector Is a class Template
        - Vector syntax ==> vector <Date type> variable_name
    */

    vector<int> nums = {10, 20, 30, 40};
    vector<int> nums_2{100, 200, 300, 400};
    vector<int> nums_3(4, 50); // ==============   vector<int> nums_3 = {50, 50, 50, 50};

    for (int i = 0; i < nums.size(); i++) {
        cout << nums.at(i) << ' ';
    }
    cout << "\n===========\n";

    for (int i = 0; i < nums_2.size(); i++)
    {
        cout << nums_2.at(i) << ' ';
    }
    cout << "\n===============\n";

    for (int i = 0; i < nums_3.size(); i++)
    {
        cout << nums_3.at(i) << ' ';
    }
    cout << "\n===========\n";

    cout << "Size of vector 3: " << nums_3.size() << "\n";

    cout << "\n===========\n";

    nums_3.push_back(1000);

    cout << "Size of vector 3: " << nums_3.size() << "\n";

    for (int j = 0; j < nums_3.size(); j++) {
        cout << nums_3.at(j) << ' ';
    }

    cout << "\n==================68==================\n";

    //                          vector vs array

    /*
        Vector
        - It need A standard Header to work
        - Can be resized After insertion of Deleting of Elements
        - Not Index Based And Elements Accessed by iterators
                - Vectors are more flexible than arrays
                - Vectors are more secure than arrays
                - vector are more memory than arrays
                - vector are slower than arrays
                Vector available in C++ only
        array
                - c Array is language construct
                - cannot be resized
                - Elements accessed by indexs
                - Arrays are faster than vectors
                - Arrays are less memory than vectors
                - Arrays are available in C and C++
    
        when to use vector
            When we don't know the size of the list
    
    
        when we use array
            when it comes to performance & speed
    */

    int nums_a[4] = {10, 20, 30};
    cout << nums_a[2] << "\n"; // 30

    nums_a[3] = 100;

    cout << nums_a[3] << "\n";

    cout << "----@----\n";

    array<int, 4> nums_array = {10, 20, 30};
    cout << nums_array[2] << "\n";

    nums_array[3] = 999;
    cout << nums_array[3] << "\n";

    cout << "----@@----\n";
    vector<int> nums_vector_1 = {10, 20, 30};
    cout << calc(nums_vector_1);

    cout << "\n==================69==================\n";

    //                         vector - Access , Add, Update, Delete

    /*
    Vector
            - Access
            -at()
            - Square Brackets [] < Do not use

            - Add
                -push_back ==> Add Element

            - Update
                - at()

            - Delete
                -- pop_back() ==> Remove Element From The End
        */

    vector<int> nums_vector_2 = {10, 20, 30};

    // cout << nums_vector_2[3] << "\n"; // problem
    // cout << nums_vector_2.at(3); // we use this to see the problem

    nums_vector_2.push_back(40);

    cout << nums_vector_2.at(3) << "\n"

         << nums_vector_2.size() << "\n"; // 4

    nums_vector_2.at(3) = 100;

    cout << nums_vector_2.at(3) << endl;

    nums_vector_2.pop_back();

    cout << nums_vector_2.size() << "\n"; // 3

    cout << "\n==================70==================\n";

    //                                  vector Function

    /*

    Vector

    - Size()        < Current of Elements
    - max_size()    < Maximum Number of Elements
    - capacity()    < store capacity
    - front()       < First Element
    - back()        < Last Element
    - clear()       < Clear All Elements from Vector
    - empty()       < check if it is Empty or Not
    */

    vector<int> nums_b = {10, 20, 30, 40};
    cout << nums_b.size() << "\n"
         << nums_b.max_size() << "\n";
    nums_b.push_back(50);
    nums_b.push_back(60);
    nums_b.push_back(70);
    nums_b.push_back(80);
    cout << nums_b.capacity() << "\n"; // give us store capacity
    cout << nums_b.front() << "\n"
         << nums_b.back() << "\n"
         << nums_b.empty(); //  no => false => 0
    nums_b.clear();         // clear all elements
    cout << "\n"
         << nums_b.empty(); // yes => true => 1

    if (nums_b.empty())
    {
        cout << "\nVector is Empty\n";
    }
    else
    {
        cout << "\nVector is Not Empty\n";
    }

    cout << "\n==================71==================\n";

    //                                  vector iterator & why to use it ?

    /*
    Vector
    - Iterator

    What is Iterator ?
        - Iterator used to point to the memory Address of the container

    Why to use Iterator ?
        1 - Simplify the code , We want to see the full iteration of the containers
        2 - Support for many Algorithms like sorting, finding
        3 - Allow the dealing with one Element without the need to load the full list
        4 - Work The Same Way with all containers
        5 - It reduce the complexity And extention Time of the Application

        - print
            [*] Dereference ==> Don't print the iterator, print what its point to


    */

    vector<int> nums_c = {10, 20, 30, 40};
    vector<int>::iterator it = nums_c.begin();
    auto ite = nums_c.begin() + 1;

    cout << "First Element is: " << *it << "\n"
         << "Second Element is: " << *ite << "\n"
         << "First Element is: " << *nums_c.begin() << "\n";

    cout << "\n-----------\n";

    nums_c.erase(nums_c.begin(), nums_c.begin() + 2);

    cout << "First Element after delete is: " << *nums_c.begin() << "\n";

    cout << "\n==================72==================\n";

    //                                  vector  traversing with iterator

    /*
        vector
            - iterator
                -- Traversing
                    --- begin()
                    --- end()
                    --- advance()
    */

    vector<int> nums_d = {10, 20, 30, 40};
    vector<int>::iterator first = nums_d.begin();
    vector<int>::iterator last = nums_d.end() - 1;

    cout << "First Element is: " << *first << "\n";
    cout << "Second Element is: " << first[1] << "\n";
    cout << "third Element is: " << first[2] << "\n";

    cout << "\n---------\n";

    cout << "last Element is: " << *last << "\n";
    cout << "Before last Element is: " << *(last - 1) << "\n";

    cout << "\n--------------------\n";

    advance(first, 3);
    cout << "First Element is: " << *first << "\n"; // 40

    advance(first, -2);
    cout << "First Element is: " << *first << "\n"; // 20

    cout << "\n==================73==================\n";

    //                                  vector  Loop wit iterator & ranged Loop

    vector<int> numbers = {10, 20, 30, 40};
    vector<int>::iterator it_1;

    for (it_1 = numbers.begin(); it_1 != numbers.end(); it_1++)
    {
        cout << *it_1 << "\n";
    }

    cout << "\n-----------\n";

    for (int val : numbers)
    {
        cout << val << "\n";
    }
    cout << "\n-----------\n";

    int numbers_21[4] = {1, 2, 3, 4};

    for (int my_numbers : numbers_21)
    {
        cout << my_numbers << "\n";
    }

    cout << "\n==================74==================\n";

    //                                  vector  Sort, Count And reverse

    /*
    Vector
        - use  iterator to:
            - sort
            - Count
            - reverse

            all of these from algorithm library
    */

    vector<int> numbers_92 = {10, 500, 60, -20, 20, 20, 100, 20};
    int val = 20;

    int count_times = count(numbers_92.begin(), numbers_92.end(), val);

    cout << "Number " << val << " Found " << count_times << " Times\n";

    cout << "---------------\n";

    for (int &n : numbers_92)
    {
        cout << n << "\n";
    }
    cout << "---------------\n";

    sort(numbers_92.begin(), numbers_92.end());
    sort(numbers_92.begin(), numbers_92.end(), greater<int>());

    for (int &n : numbers_92)
    {
        cout << n << "\n";
    }
    cout << "---------------\n";

    reverse(numbers_92.begin(), numbers_92.end());

    for (int &n : numbers_92)
    {
        cout << n << "\n";
    }

    cout << "\n==================75==================\n";

    //                                  What are pointers

    /*
        pointers

        what are pointers ?

            - A variable that store memory address of other variable.
    */

    int num = 100;
    int *ptr = &num; // [&] ==> Address of || reference operator

    cout << "Value: " << num << "\n";
    cout << "address: " << &num << "\n";
    cout << "address: " << ptr << "\n";
    cout << "Value: " << *ptr << "\n";

    *ptr = 200;

    cout << "Value: " << num << "\n";
    cout << "address: " << &num << "\n"; // Same memory address
    cout << "address: " << ptr << "\n";  // Same memory address
    cout << "Value: " << *ptr << "\n";

    cout << "\n==================76==================\n";

    //                                  What to array

    int _nums[] = {10, 20, 30, 40};

    int *pt = &_nums[0];

    cout << "First Element\n\n";

    cout << "Value with index: " << _nums[0] << "\n";
    cout << "Value with pointer: " << *pt << "\n";

    cout << "address with index: " << &_nums[0] << "\n";
    cout << "address with pointer: " << pt << "\n";

    cout << "\n-----------\n";

    cout << "second Element\n\n";

    cout << "Value with index: " << _nums[1] << "\n";
    cout << "Value with pointer: " << *(pt + 1) << "\n";

    cout << "address with index: " << &_nums[1] << "\n";
    cout << "address with pointer: " << pt + 1 << "\n";

    cout << "\n-----------\n";

    cout << "thrid Element\n\n";

    cout << "Value with index: " << _nums[2] << "\n";
    cout << "Value with pointer: " << *(pt + 2) << "\n";

    cout << "address with index: " << &_nums[2] << "\n";
    cout << "address with pointer: " << pt + 2 << "\n";

    cout << "\n==================77==================\n";

    //                                  void and wild pointer and null

    int *ptr_1; // wild pointer
    int *ptr_2 = NULL;
    int *ptr_3 = nullptr;

    cout << ptr_1 << "\n"; // Garbage Value
    cout << ptr_2 << "\n"; // 0
    cout << ptr_3 << "\n"; // 0

    int a = 100;

    void *ptr_4 = &a;

    cout << ptr_4 << "\n";

    // cout << *ptr_4 << "\n"; // error

    // casting

    // c-style

    cout << *(int *)ptr_4 << "\n";

    // modern

    cout << *static_cast<int *>(ptr_4) << "\n"; // 100

    cout << "\n==================78==================\n";

    //                          pointers - Arithmetic And array

    int __nums[] = {10, 20, 30, 40, 50};
    cout << __nums << "\n";     // 1st Element => Memory Address
    cout << &__nums[0] << "\n"; // 1st Element => Memory Address

    cout << __nums[0] << "\n"; // 1st Element
    cout << *__nums << "\n";   // 1st Element
    cout << "---------------\n";
    cout << __nums[1] << "\n";     // 2st Element
    cout << *(__nums + 1) << "\n"; // 2st Element

    cout << "---------------\n";

    int *ptr___ = __nums;

    cout << ptr___ << "\n";  // 1st Element => Memory Address
    cout << *ptr___ << "\n"; // 1st Element => 10
    
    cout << "\n---------------\n";
    ptr___++;

    cout << ptr___ << "\n";  // 2st Element => Memory Address
    cout << *ptr___ << "\n"; // 2st Element => 20

    cout << "\n---------------\n";
    ptr___ += 3;

    cout << ptr___ << "\n";  // last Element => Memory Address
    cout << *ptr___ << "\n"; // last Element => 50

    cout << "\n---------------\n";
    ptr___--;

    cout << ptr___ << "\n";  //  Before last Element => Memory Address
    cout << *ptr___ << "\n"; //  Before last Element => 40

    return 0;
}