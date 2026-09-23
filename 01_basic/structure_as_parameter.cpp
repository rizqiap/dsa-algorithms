#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
};

// 1. Pass by Value
void changeByValue(Student s) {
    s.age = 30;

    cout << "Inside changeByValue: " << s.age << endl;
}

// 2. Pass by Address / Pointer
void changeByPointer(Student* s) {
    s->age = 40;

    cout << "Inside changeByPointer: " << s->age << endl;
}

// 3. Pass by Reference
void changeByReference(Student& s) {
    s.age = 50;

    cout << "Inside changeByReference: " << s.age << endl;
}

// 5. Function yang mengembalikan struct
Student createStudent(string name, int age) {
    Student s;

    s.name = name;
    s.age = age;

    return s;
}

// 6. Menerima struct dan mengembalikan struct
Student increaseAge(Student s) {
    s.age = s.age + 1;

    return s;
}

int main() {

    // Membuat Student dari function
    Student student = createStudent("Rizqi", 21);

    cout << "=== Initial Student ===" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;


    cout << "\n=== Pass by Value ===" << endl;

    changeByValue(student);

    cout << "After changeByValue: "
         << student.age << endl;


    cout << "\n=== Pass by Pointer ===" << endl;

    changeByPointer(&student);

    cout << "After changeByPointer: "
         << student.age << endl;


    cout << "\n=== Pass by Reference ===" << endl;

    changeByReference(student);
    

    cout << "After changeByReference: "
         << student.age << endl;

    cout << "\n=== Return Struct ===" << endl;

    student = increaseAge(student);

    cout << "After increaseAge: "
         << student.age << endl;


    return 0;
}