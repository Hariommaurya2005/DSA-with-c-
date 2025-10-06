#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            cout << "Number is not prime";
            return 0;  // program yahin khatam kar do
        }
        i++;
    }

    cout << "Number is prime";
    return 0;
} 
