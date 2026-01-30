// write a program to find given element square root with decimal using binary search
#include <iostream>
using namespace std;
int sqrtInt(int n) {
    int s = 0, e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        int square = mid * mid;

        if (square == n) {
            return mid;
        }
        else if (square < n) {
            ans = mid; 
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int dubblePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor) {
            ans = j;
        }
    }
    return ans;         
}
int main() {
    int n;
    cout << "Enter number to find square root: ";
    cin >> n;

    int tempSol = sqrtInt(n);
    cout << "Integer part of square root is: " << tempSol << endl;

    int precision;
    cout << "Enter number of decimal places: ";
    cin >> precision;

    double finalAns = dubblePrecision(n, precision, tempSol);
    cout << "Square root of " << n << " upto " << precision << " decimal places is: " << finalAns << endl;

    return 0;
}