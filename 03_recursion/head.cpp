#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0) // base case
    {
        fun(n - 1);
        cout << n << endl;
    }
}

void fun1(int n) { // ini bukan recursion wok, cuma mirip doang 
    int i = 1;

    while(i <= n) { 
        cout << i << endl; 
        i++;
    }
}

int main()
{
    cout << "condiiton: " << endl;
    fun(5);

    cout << "loop: " << endl;
    fun1(5);
}