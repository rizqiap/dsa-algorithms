#include <iostream>

using namespace std;

int main()
{
    // while loop
    int i = 10;

    // while (i < 5) {
    //     cout << i << "\n";
    //     i++;
    // }

    // do/while loop
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 5);

    // for loop
    for (int a = 0; a < 6; a++)
    {
        cout << a << "\n";
    }

    // nested loop
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    // for each
    string name = "Rizqi";

    for (char letter : name)
    {
        cout << letter << "\n";
    }

    return 0;
}