#include <iostream>

using namespace std;

int main() {
    int a = 20;
    int &r = a;

    int b = 30;
    r = b; 

    cout << r;
    cout << a;
}