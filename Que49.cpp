#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1;
    
    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";   // pehla number print karo
        int next = a + b;   // next term banao
        a = b;              // update a
        b = next;           // update b
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    printFibonacci(n);

    return 0;
}
