#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;   // left search
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;   // right search
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}
int main() {
    int arr[8] = {1, 2, 2, 2, 2, 3, 4, 5};
    int n = 8;
    int key = 2;

    cout << "First Occurrence of " << key << " is at index " << firstOcc(arr, n, key) << endl;
    cout << "Last Occurrence of " << key << " is at index " << lastOcc(arr, n, key) << endl;

    return 0;
}
