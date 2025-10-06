#include <iostream>
using namespace std;

int getSum(int num[], int size) {
    int sum = 0;   // initially 0
    for(int i = 0; i < size; i++) {
        sum += num[i];  // sum = sum + num[i]
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int num[100];
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Sum of all elements = " << getSum(num, size) << endl;

    return 0;
}
