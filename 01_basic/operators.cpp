#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 3;

    // Aritmetika
    cout << "x + y = " << x + y << '\n';
    cout << "x - y = " << x - y << '\n';
    cout << "x * y = " << x * y << '\n';
    cout << "x / y = " << x / y << '\n';
    cout << "x % y = " << x % y << '\n';

    // Perbandingan dan logika
    cout << "x == y: " << (x == y) << '\n';
    cout << "x != y: " << (x != y) << '\n';
    cout << "x > y: " << (x > y) << '\n';
    cout << "x < y: " << (x < y) << '\n';
    cout << "Keduanya positif: " << (x > 0 && y > 0) << '\n';

    // Assignment
    x += 5;
    cout << "x setelah x += 5: " << x << '\n';

    return 0;
}
