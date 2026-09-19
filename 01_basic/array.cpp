#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nums[4];

    for (int newNums : nums)
    {
        cout << newNums << "\n";
    }

    cout << "variable size: " << sizeof(nums) << "\n";

    int A[5];

    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }

    return 0;
}