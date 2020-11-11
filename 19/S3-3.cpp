#include <iostream>
#include <algorithm>

using namespace std;

struct arr {
	double a[100];
};

struct arr aranjare(double a[], int n)
{
	arr b;
	for (int i = 0; i < n; i++)
	{
		b.a[i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (b.a[j] > b.a[j + 1])
			{
				swap(b.a[j], b.a[j + 1]);
			}
		}
	}
	return b;
}

int main()
{
	arr x;
	double a[] = { 12, -7.5, 6.5, -3, -8, 7.5 };
	int n = 6;

	x = aranjare(a, n);

	for (int i = 0; i < n; i++)
	{
		cout << x.a[i] << " ";
	}
	return 0;

}