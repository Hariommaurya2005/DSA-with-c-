#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i=1;

    cout << "Counting from 1 to " << n << ":" << endl;
    
    int some = 0;   
    while (i <= n) {
        some =some + i; 
        i++;    

    }   cout << "Sum of numbers from 1 to " << n << " is: " << some << endl;
}
