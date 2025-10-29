#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;

    cout << "Operators found:" << endl;

    int count = 0;

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            count++;
            cout << "operator" << count << ":  " << ch << endl;
        }
    }

    if (count == 0)
        cout << "No operator found!" << endl;

    return 0;
}

