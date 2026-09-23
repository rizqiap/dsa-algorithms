#include <iostream>

using namespace std;

int* notFun(int n) {
    int* p = new int[n];

    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }

    return p;
}

void fun(int Z[], int n) {
    for (int i = 0; i < n; i++) {
        cout << Z[i] << endl;
    }
}

void swapReference(int &x, int &y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

/*
tmp = 10
x = 20
y = 10
*/

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(10, 20);

    cout << result << endl;

    // pass by address
    int num1 = 10;
    int num2 = 20;

    swap(&num1, &num2);

    cout << "first number: " << num1 << endl;
    cout << "second number: " << num2 << endl;

    // pass by reference
    int num3 = 10;
    int num4 = 20;

    swapReference(num3, num4);

    cout << "third number: " << num3 << endl;
    cout << "fourth number: " << num4 << endl;

    // array as parameter
    int Z[] = {2, 3, 4, 5, 6};
    fun(Z, 5);

    // array as return
    int* value = notFun(5);

    for (int i = 0; i < 5; i++) {
        cout << value[i] << endl;
    }

    return 0;
}