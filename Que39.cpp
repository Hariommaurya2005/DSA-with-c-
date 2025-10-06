#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 0){   // zero case
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    int place = 1;   // 10^0 = 1

    while(n != 0){
        int bit = n & 1;            // last bit
        ans = (bit * place) + ans;  // current bit add
        n = n >> 1;                 // right shift
        place *= 10;                // next place value (10^i)
    }

    cout << ans << endl;
    return 0;
}
