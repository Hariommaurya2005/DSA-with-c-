#include <iostream>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;

void findMinMax(int arr[], int n) {
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(int i=0; i<n; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
        }
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Minimum = " << minVal << endl;
    cout << "Maximum = " << maxVal << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[1000];  // fixed length array
    cout << "Enter " << n << " elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    findMinMax(arr, n);
    return 0;
}
