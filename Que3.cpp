#include <iostream>
using namespace std;

int main() {
    int n, i = 1;   // i ko initialize kiya 1 se
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        while (i <= n) {
            sum = sum + i;
            i++;
        }
        cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
    }
    else {
        cout << "Please enter an even number." << endl;
    }

    return 0;
}
