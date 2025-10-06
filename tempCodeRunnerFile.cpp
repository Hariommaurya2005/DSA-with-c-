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
        int bit = n & 1;   // last bit nikalna
        ans = (bit * (int)pow(10, i)) + ans;  // yahi formula jo tumne diya tha
        n = n >> 1;  // right shift
        i++;
    }

    cout << ans << endl;
    return 0;
}
