#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
};

int main()
{
    int a = 10;
    int *p;

    p = &a;

    cout << *p << endl;

    // pointer array
    int A[5] = {1, 2, 3, 4, 5};

    p = A;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    // dynamic memory
    p = new int[5];

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    // structure pointer
    Student student = {"rizqi", 20};

    Student *s;
    s = &student;

    cout << s->name << endl;
    cout << s->age << endl;

    // heap
    s->name = "rizqi";
    s->age = 20;

    cout << s->name << endl;
    cout << s->age << endl;

    return 0;
}