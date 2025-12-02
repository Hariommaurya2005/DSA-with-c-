#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;
    bool flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag++;
            break;
        }
    }
    if (flag > 0)
    {
        cout << "number is not prime" << endl;
    }
    else
        cout << "nubmer is a prime " << endl;
}