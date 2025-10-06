#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;   // agar last bit 1 hai to count++
        n >>= 1;              // right shift
    }
    return count;
}

int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    int totalSetBits = countSetBits(a) + countSetBits(b);

    cout << "Total set bits in a and b = " << totalSetBits << endl;

    return 0;
}
