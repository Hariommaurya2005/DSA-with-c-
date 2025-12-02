#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Counting from 1 to " << n << ":" << endl;
    
    int i = 1;   // shuruat 1 se
    while (i <= n) {
        cout << i << " ";
        i++;    // i ko ek-ek karke badhate rahenge
    }
    cout << endl;

    return 0;
}
