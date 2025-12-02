#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int choice = 1;  // har denomination ke liye ek case

    switch (choice) {
        case 1: 
            cout << "100 Rs notes: " << amount / 100 << endl;
            amount = amount % 100;

        case 2:
            cout << "50 Rs notes: " << amount / 50 << endl;
            amount = amount % 50;

        case 3:
            cout << "20 Rs notes: " << amount / 20 << endl;
            amount = amount % 20;

        case 4:
            cout << "1 Rs notes: " << amount / 1 << endl;
            amount = amount % 1;
            break;

        default:
            cout << "Invalid case" << endl;
    }

    return 0;
}
