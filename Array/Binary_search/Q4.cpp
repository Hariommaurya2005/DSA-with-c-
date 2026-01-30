#include<iostream>
using namespace std;
int getPivot(int arr[], int n) {
    int s =0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; 
}
int binarySearch(int arr[], int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}
int main(){
    int arr[7] = {7,9,1,2,3,4,5};
    int n = 7;
    int key = 3;

    int pivot = getPivot(arr, n);

    //cout << "Pivot is at index " << pivot << endl;

    if(key >= arr[pivot] && key <= arr[n-1]){
        //search in second half
        cout << "Element found at index " << binarySearch(arr, pivot, n-1, key) << endl;
    }
    else{
        //search in first half
        cout << "Element found at index " << binarySearch(arr, 0, pivot-1, key) << endl;
    }

    return 0;
}
