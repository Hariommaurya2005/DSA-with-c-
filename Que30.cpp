#include<iostream>
using namespace std;    

int main(){
    int n;
    cin >> n;    // rows input
    int i = 1;

    while (i <= n) {
        // 1st triangle printing
        int space = n - i;
        while (space>0) {
            cout << " ";
            space--;
        }

        // star printing 
        int j = 1;
        while (j <= i) {
            cout << j;
            j++;
        }
        //Third trangle printing
        int start=i-1;
        while(start){
            cout<<start;
            start=start-1;
        }


        cout << endl;  // ek row complete hone ke baad line change
        i++;
    }
}
