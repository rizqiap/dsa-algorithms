#include <iostream>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle() {
        length = 0;
        breadth = 0;
    }

    rectangle(int l, int b) {
        length = l;
        breadth = b;
    } 

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length * breadth);

        return p;
    }

    ~rectangle() {
        cout << "destructor";
    }
};

int main()
{
    rectangle r(10, 5); // object

    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    return 0;
}