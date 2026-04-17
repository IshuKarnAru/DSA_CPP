#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes100 = 0, notes50 = 0, notes20 = 0, notes1 = 0;

    switch (1) {
        case 1:
            notes100 = amount / 100;
            amount %= 100;

        case 2:
            notes50 = amount / 50;
            amount %= 50;

        case 3:
            notes20 = amount / 20;
            amount %= 20;

        case 4:
            notes1 = amount;
    }

    cout << "\nMinimum number of notes required:\n";
    cout << "100 Rs notes: " << notes100 << endl;
    cout << "50 Rs notes: " << notes50 << endl;
    cout << "20 Rs notes: " << notes20 << endl;
    cout << "1 Rs notes: " << notes1 << endl;

    return 0;
}