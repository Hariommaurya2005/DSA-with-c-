#include<iostream>
using namespace std;    
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
           
            cout << n-j+1;  // reverse order me print hoga
            j++;
        }
        cout << endl;  // line change ek row ke baad
        i++;
    }
}
