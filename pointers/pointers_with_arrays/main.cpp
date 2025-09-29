#include <iostream>

using namespace std;

int main () {

    int lucky_numbers[5] = {2, 3, 5, 7, 9};

    cout << lucky_numbers << '\n'; // This will print the address of the first element like that ---> cout << &lucky_numbers[0] << '\n';

    cout << lucky_numbers[2] << " = " << *(lucky_numbers + 2) << '\n';

    int luc_nums[5];

    for (int i = 0; i < 5; ++i) {
        cout << "Enter the value " << i + 1 << " here: ";
        cin >> luc_nums[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << "The element " << i + 1 << " = " << *(luc_nums + i) << '\n';
    }

    return 0;
}