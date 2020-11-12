#include <iostream>
#include <algorithm>

using namespace std;

void nule(int& a[], int n)
{
	int k = n;
	int i = 1;
	while (i <= k)
	{
		if (a[k] == 0)
			k--;
		if (a[i] == 0 && a[k] != 0)
		{
			swap(a[i], a[k]);
			i++;
			k--;
		}
	}
}

int main()
{

	return 0;
}