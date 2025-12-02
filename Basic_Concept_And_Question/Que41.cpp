#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0){   // zero case
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    int i = 0;

    while(n != 0){
        int digit = n % 10;   // binary ka last digit nikalo
        ans = ans + (digit * (int)pow(2, i)); // 2^i lagana hai, 10^i nahi
        n = n / 10;  // next digit
        i++;
    }

    cout << ans << endl;
    return 0;
}
