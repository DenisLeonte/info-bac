#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	ifstream in("numere.txt");
	int a[10000];
	int k, aux, n = 0;
	cin >> k;
	while (in >> aux)
	{
		a[n] = aux;
		n++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] < a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}