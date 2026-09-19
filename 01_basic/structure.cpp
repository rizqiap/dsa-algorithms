#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    float gpa;
};

int main()
{
    Student students[3];

    students[0] = {"samsul", 21, 3.81};
    students[1] = {"Budi", 22, 3.70};
    students[2] = {"Andi", 20, 3.90};

    for (int i = 0; i < 3; i++) {
        cout << students[i].name << "\n";
        cout << students[i].age << "\n";
        cout << students[i].gpa << "\n";
        cout << "   " << "\n";
    }

    return 0;
}