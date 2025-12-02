#include<iostream>
using namespace std;    
int main(){
    int n;
    cin >> n;
    int i = 1;
    
    while (i <= n) {
        int j = 1;
        char value= 'A'+i-1; // Set value to the character corresponding to the row number  
        while (j <= i) {          
             
            cout <<value<< " ";
            j++;
        }
        cout << endl;  
        i++;
    }
}
