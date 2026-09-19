#include <iostream>
#include <string>

using namespace std;

int main() {
    // create string
    string name = "sandi";
    cout << "name: " << name << "\n";

    // access string char
    // kalo index ga ketemu dia bakal munculin error
    cout << "first char: " << name[0] << "\n";
    cout << "last char: " << name[3] << "\n"; 
    
    // string length
    // length sama size sama aja
    cout << "length: " << name.length() << "\n";
    cout << "length: " << name.size() << "\n";

    // special char
    cout << "Hello\nWorld\n"; // \n = new line
    cout << "Name\tAge\n"; // \t = tab
    cout << "Rizqi\t20\n";
    cout << "He said \"Hello\"\n"; // \" = double quote
    cout << "C:\\Users\\Rizqi\\Documents\n"; // \\ = backslash


}