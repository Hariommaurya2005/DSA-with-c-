#include<iostream>
using namespace std;    

int main(){
    int n;
    cin >> n;    // rows input
    int i = 1;

    while (i <= n) {
        // 1st triangle : numbers 1 to n-i+1
        int j = 1;
        while (j <= (n - i + 1)) {
            cout << j;
            j++;
        }

        // 2nd triangle : stars (2*(i-1))
        int star = 1;
        while (star <= 2*(i-1)) {
            cout << "*";
            star++;
        }

        // 3rd triangle : numbers from (n-i+1) to 1
        int k = (n - i + 1);
        while (k >= 1) {
            cout << k;
            k--;
        }

        cout << endl;  // ek row complete hone ke baad line change
        i++;
    }
}
