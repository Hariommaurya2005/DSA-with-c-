#include <iostream>
using namespace std;

// Function jo nth term tak AP print karega
void printAP(int n) {
    for (int i = 1; i <= n; i++) {
        int term = 3 * i + 7;
        cout << term << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    printAP(n);

    return 0;
}
