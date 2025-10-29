#include <iostream>
using namespace std;

int main() {
    string firstName, lastName, fullName;

    cout << "Enter your First Name: ";
    cin >> firstName;

    cout << "Enter your Last Name: ";
    cin >> lastName;


    fullName = firstName + " " + lastName;

    cout << "Full Name = " << fullName << endl;

    return 0;
}

