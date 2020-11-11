#include <iostream>

using namespace std;

int main()
{
	int a[21][21];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i % 2 != 0)
				a[i][j] = i + j;
			else
			{
				int minn = a[i - 1][j];
				if (j == 1) 
				{
					if (a[i - 1][j + 1] < minn)
						minn = a[i - 1][j + 1];
				}
				else if (j == n)
				{
					if (a[i - 1][j - 1] < minn)
						minn = a[i - 1][j - 1];
				}
				else {
					if (a[i - 1][j - 1] < minn)
						minn = a[i - 1][j - 1];

					if (a[i - 1][j + 1] < minn)
						minn = a[i - 1][j + 1];
				}
				a[i][j] = minn;
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