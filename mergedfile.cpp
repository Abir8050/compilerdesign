#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isNumeric(string input) {
    bool hasDot = false;

    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            continue; \
        } else if (input[i] == '.' && !hasDot) {
            hasDot = true;
        } else {
            return false;
        }
    }
    return true;
}

void checkNumeric() {
    string input;
    cout << "Enter something: ";
    cin >> input;

    if (isNumeric(input)) {
        cout << "This is a numeric constant." << endl;
    } else {
        cout << "This is not numeric." << endl;
    }
}

void extractOperators() {
    string input;
    int count = 0;
    cout << "Enter an expression: ";
    cin >> input;
    cout << "Operators found:" << endl;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '%' || input[i] == '=') {
            count++;
            cout << "operator " << count << ": " << input[i] << endl;
        }
    }
    if (count == 0)
        cout << "No operator found!" << endl;
}

void checkComment() {
    string input;
    cout << "Enter a line: ";
    cin.ignore();  // Clear the input buffer
    getline(cin, input);
    if (input.substr(0, 2) == "//")
        cout << "This is a single-line comment." << endl;
    else if (input.substr(0, 2) == "/*" && input.size() >= 4 && input.substr(input.size() - 2) == "*/")
        cout << "This is a multi-line comment." << endl;
    else
        cout << "This is not a comment." << endl;
}

void validateIdentifier() {
    string input;
    cout << "Enter an input: ";
    cin >> input;
    bool isValid = true;

    if (!(isalpha(input[0]) || input[0] == '_')) {
        cout << "Not a valid identifier." << endl;
        return;
    }

    for (int i = 1; i < input.length(); i++) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            cout << "Not a valid identifier." << endl;
            isValid = false;
            break;
        }
    }

    if (isValid)
        cout << "Valid identifier" << endl;
}

void calculateAverage() {
    int arr[100], n;
    float sum = 0, avg;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;
    cout << "Average value of the elements = " << avg << endl;
}

void combineNames() {
    string firstName, lastName, fullName;
    cout << "Enter your First Name: ";
    cin >> firstName;
    cout << "Enter your Last Name: ";
    cin >> lastName;
    fullName = firstName + " " + lastName;
    cout << "Full Name = " << fullName << endl;
}

void findMinMax() {
    int arr[100], n, i;
    int min, max;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Minimum value = " << min << endl;
    cout << "Maximum value = " << max << endl;
}

int main() {
    int choice;

    // Display menu options
    cout << "Which part would you like to see? Please enter the corresponding number:" << endl;
    cout << "1. Check if input is numeric" << endl;
    cout << "2. Extract operators from an expression" << endl;
    cout << "3. Check if the input is a comment" << endl;
    cout << "4. Validate identifier" << endl;
    cout << "5. Calculate average of array elements" << endl;
    cout << "6. Combine first and last name" << endl;
    cout << "7. Find minimum and maximum values in an array" << endl;
    cout << "Enter your choice (1-7): ";
    cin >> choice;


    switch (choice) {
        case 1:
            checkNumeric();
            break;
        case 2:
            extractOperators();
            break;
        case 3:
            checkComment();
            break;
        case 4:
            validateIdentifier();
            break;
        case 5:
            calculateAverage();
            break;
        case 6:
            combineNames();
            break;
        case 7:
            findMinMax();
            break;
        default:
            cout << "Invalid choice, please select a valid number (1-7)." << endl;
            break;
    }

    return 0;
}
