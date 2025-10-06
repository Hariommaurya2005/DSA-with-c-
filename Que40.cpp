#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = "";
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;   // i-th bit nikala
        ans += char('0' + bit);   // string me add kiya
    }

    cout << ans << endl;
    return 0;
}
