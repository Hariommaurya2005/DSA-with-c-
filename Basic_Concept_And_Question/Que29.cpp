#include<iostream>
using namespace std;    

int main(){
    int n;
    cin >> n;    // rows input
    int i = 1;

    while (i <= n) {
        // space printing
        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }

        // star printing 
        int j = 1;
        while (j <= i) {
            cout << i;
            j++;
        }

        cout << endl;  // ek row complete hone ke baad line change
        i++;
    }
}
