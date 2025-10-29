#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter an input: ";
    cin >> input;


    if (!(isalpha(input[0]) || input[0] == '_')) {
        cout << "Not a valid identifier." << endl;
        return 0;
    }

    for (int i = 1; i < input.length(); i++) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            cout << "Not a valid identifier." << endl;
            return 0;
        }
    }

    cout << "valid identifier" << endl;
    return 0;
}
