// Problem link - https : // www.codechef.com/APRIL221C/problems/AXNODR/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        if (a % 4 == 0)
        {
            cout << a + 3 << endl;
        }
        else if (a % 4 == 1)
        {
            cout << a << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}