//  Problem link - https://www.codechef.com/APRIL221C/problems/PRIMESM

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1 || b == 1)
        {
            cout << -1 << "\n";
        }
        else if (\_\_gcd(a, b) == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}
