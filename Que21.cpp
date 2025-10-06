#include<iostream>
using namespace std;    
int main(){
    int n;
    cin >> n;
    int i = 1;
    char value= 'A';
    while (i <= n) {
        int j = 1;
         // Set value to the character corresponding to the row number  
        while (j <= i) {          
             
            cout <<value<< " ";
            value++; // Increment to the next character for the same row 
            j++;
        }
        cout << endl;  
        i++;

    }
}
