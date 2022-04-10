// Problem link - https://www.codechef.com/APRIL221C/problems/NOTUNIT
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b - a > 2)
        {
            if (a % 2 == 0)
            {
                cout << a << " " << a + 2 << endl;
            }
            else if (a % 3 == 0)
            {
                cout << a << " " << a + 3 << endl;
            }
            else
            {
                cout << a + 1 << " " << a + 3 << endl;
            }
        }
        else
        {
            if (__gcd(a, b) > 1)
            {
                cout << a << " " << a + 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}