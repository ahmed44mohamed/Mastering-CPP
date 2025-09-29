#include <iostream>
#include <array>

using namespace std;

int main() {

    cout << "\n=========================================================47=========================================\n";

    //                                                               loop With for

    /*
    for(int i, condition, update) {
        Block of code
    }
    */

    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }

    cout << "\n------------------------\n";

    int nums[4] = {100, 200, 300, 400};

    for (int index = 0; index < 4; index++)
    {
        cout << nums[index] << endl;
    }

    cout << "\n=========================================================48=========================================\n";

 //                                                     Loop with for Advanced Syntax

    int nums_s[] = {100, 200, 300, 400, 500, 600};

    int nums_count = sizeof(nums_s) / sizeof(nums_s[0]);

    for (int i = 0; i < nums_count; i++)
    {
        cout << nums_s[i] << "\n";
    }

    cout << "\n--------------------------------------\n";

    for (int i = 2; i < 5; i++)
    {
        cout << nums_s[i] << "\n";
    }

    cout << "\n--------------------------------------\n";

    //              Changes

    int ii = 0;

    for (;;)
    {
        cout << nums_s[ii] << "\n";
        ii++;
        if (ii == nums_count)
        {
            break;
        }
    }

    cout << "\n=========================================================49=========================================\n";

    //                                                                  Loop With For - Advanced Trainings

    int nums_eer[] = {100, 200, 300, 400, 500, 600};

    int nums_eer_size = sizeof(nums_eer) / sizeof(nums_eer[0]);

    for (int i = 0; i < nums_eer_size; i++) {
        if ((i % 2 == 0))
        {
            cout << nums_eer[i] << "\n";
        }
    }

    cout << "\n--------------------------------\n";

    for (int i = nums_eer_size - 1; i > 1; i--)
    {
        cout << nums_eer[i] << "\n";
    }

    cout << "\n--------------------------------\n";

    int i = nums_eer_size - 1;

    for (;;)
    {
        cout << nums_eer[i] << "\n";
        i--;
        if (i == 1)
        {
            break;
        }
    }

    cout << "\n=========================================================50=========================================\n";

    //                                      loop With for - Nested Loop

    string products[] = {"Item 1", "Item 2", "Item 3"};

    string sizes[] = {"Small", "Large", "X-Large"};

    for (int i = 0; i < 3; i++)
    {
        cout << products[i] << endl;
        cout << "Sizes: \n";
        for (int j = 0; j < 3; j++)
        {
            cout << sizes[j];
            if (j < 2)
            {
                cout << ", ";
            }
        }
        cout << "\n-----------------\n";
    }

    cout << "\n=========================================================51=========================================\n";

    //                                                           Loop with while

    /*
    while(Condition is True)
        {
            Do this
        }
    */

    int iii = 0;

    while (iii < 5)
    {
        cout << iii << "\n";
        iii++;
        if (iii == 2)
        {
            break;
        }
    }

    cout << "\n=========================================================52=========================================\n";

    //                                                              Loop With Do........While

    /*
    do
    {

    } while (condition is true)
        */

    int index_2 = 4;

    do
    {
        cout << index_2 << "\n";
        index_2++;
    } while (index_2 < 6);

    cout << "\n=========================================================53=========================================\n";

    //                                                              Loop - Break, Continue

    int nums_b[] = {10, 20, 30, 40, 20, 50};

    for (int b = 0; b < 6; b++)
    {
        if (nums_b[b] == 20)
        {
            continue;
        }

        cout << nums_b[b] << "\n";
        cout << "After\n";
    }

    cout << "\n-----------------------------\n";

    for (int v = 0; v < 6; v++)
    {
        cout << nums_b[v] << "\n";

        if (nums_b[v] == 10)
        {
            break;
        }

        cout << "After\n";
    }
    cout << "\n=========================================================54=========================================\n";

    // Create apps

    /*
        For ====> Specific Number of loops
        While ===> Loop as long Condition Is true
        Do... While ===> Always Execute Once
    */

    return 0;
}