#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

bool isKeyword(const string& s) {
    string keywords[] = {"int", "return"};
    for (string k : keywords) {
        if (k == s) return true;
    }
    return false;
}


bool isSymbol(char c) {
    string symbols = "(),{};=";
    return symbols.find(c) != string::npos;
}


bool isSeparator(char c) {
    return c == ' ' || c == '\n' || c == '\t';
}


void printToken(const string& tok) {
    if (tok.empty()) return;

    if (isKeyword(tok))
        cout << tok << " --> KEYWORD\n";

    else if (isdigit(tok[0]))
        cout << tok << " --> NUMBER\n";

    else if (isalpha(tok[0]) || tok[0] == '_')
        cout << tok << " --> IDENTIFIER\n";

    else
        cout << tok << " --> UNKNOWN\n";
}

int main() {
    ifstream file("sample.txt");

    if (!file.is_open()) {
        cout << "Error: could not open sample.txt\n";
        return 1;
    }

    char c;
    string token = "";

    while (file.get(c)) {


        if (isSymbol(c)) {
            printToken(token);
            token = "";

            cout << c << " --> SYMBOL\n";
        }

        else if (isSeparator(c)) {
            printToken(token);
            token = "";
        }
        else {

            token += c;
        }
    }


    printToken(token);

    file.close();
    return 0;
}
