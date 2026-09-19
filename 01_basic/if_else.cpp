#include <iostream>
#include <string>

using namespace std;

int main() {
    // if condition
    if (5 > 2) {
        cout << "true" << endl;
    }

    // else condiiton
    int time = 20;

    if (time < 18) {
        cout << "good day" << endl; 
    } else {
        cout << "good evening" << endl;
    }

    // else if condition
    bool doYouLoveMe = true;
    bool isLying = true;

    if (doYouLoveMe) {
        cout << "i love you baby<3" << endl;
    } else if (isLying) {
        cout << "stop lying" << endl;
    } else {
        cout << "ok, ckp tw" << endl;
    }

    // short hand if else (tenary opertor)
    // variable = (condition) ? expressionTrue : expressionFalse;
    string result = (time < 18) ? "good day" : "good evening";
    cout << result << endl;

    cout << ((time < 18) ? "good day" : "good evening");

    string msg = (time < 18) ? "good morning" 
    : (time > 18) ? "good afternoon"
    : "good evening";

    cout << msg << endl;

    // nested if
    int age = 15;
    bool hasLicense = true;

    if (age > 17) {
        if (hasLicense) {
            cout << "allowed to drive" << endl;
        } else {
            cout << "you need license to drive" << endl;
        }
    } else {
        cout << "you are too young" << endl;
    }

    // logical operator
    bool isLoggedIn = true;
    bool isAdmin = true;
    int securityLevel= 3;

    if (isLoggedIn && (isAdmin || securityLevel <= 1)) {
        cout << "access granted" << endl;
    } else {
        cout << "access denied" << endl;
    }

    return 0;
}