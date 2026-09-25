#include <iostream>

using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int sum2(int n)
{
    int i, s = 0;

    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }

    return 0;
}

int main()
{
    cout << "sum: " << sum(5) << endl;
    cout << "sum2: " << sum(5) << endl;
    return 0;
}