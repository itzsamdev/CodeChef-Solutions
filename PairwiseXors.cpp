//  Problem link - https://www.codechef.com/APRIL221C/problems/XORABC

#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a = n & ~(n - 1);
        if (n & 1 || n == a)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << a / 2 << " " << n / 2 << " " << (n - a) / 2 << "\n";
        }
    }
    return 0;
}
