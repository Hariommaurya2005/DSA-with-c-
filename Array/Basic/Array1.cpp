#include <iostream>
using namespace std;

void fillArray(int arr[], int n, int value) {
    for(int i=0; i<n; i++) {
        arr[i] = value;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[5];   // array bana liya
    fillArray(arr, n, 7);   // function se bhar diya
    printArray(arr, n);     // function se print kiya
    return 0;
}
