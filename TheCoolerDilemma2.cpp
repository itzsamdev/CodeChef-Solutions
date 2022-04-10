//  Problem link - https://www.codechef.com/APRIL221C/problems/WATERCOOLER2
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int X, Y;
		cin >> X >> Y;
		if (Y % X == 0)
		{
			cout << (Y / X) - 1 << endl;
		}
		else
		{
			cout << Y / X << endl;
		}
	}
	return 0;
}
