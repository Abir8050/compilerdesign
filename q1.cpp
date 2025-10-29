#include <iostream>
using namespace std;

int main() {
    string input;
    bool isNumeric = true;

    cout << "Enter something: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "This is a numeric constant." << endl;
    else
        cout << "This is not numeric." << endl;

    return 0;
}

