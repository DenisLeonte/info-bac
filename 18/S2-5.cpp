#include <iostream>

using namespace std;

int main()
{
	int a[20][20];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i % 2 == 0)
			{
				a[i][j] = j;
			}
			else
			{
				a[i][j] = i;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}