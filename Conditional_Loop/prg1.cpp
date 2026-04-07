#include <iostream>
using namespace std;

int main() {
    char var;  // Change int to char
    cout << "Enter a character: ";
    cin >> var;

    if (var >= 'a' && var <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    } 
    else if (var >= 'A' && var <= 'Z') {
        cout << "The character is an uppercase letter." << endl;
    } 
    else {
        cout << "The character is not a letter." << endl;
    }

    return 0;
}
