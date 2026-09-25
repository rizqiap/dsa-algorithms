#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0) // base case
    {
        cout << n << endl;
        fun(n - 1);
    }
}

int main()
{
    fun(5);
}

/*
disebut tail recursion karena pemanggil
recursive-nya berada di "ekor" / bagian
paling akhir dari function
*/