#include <iostream>

using namespace std;

int count(float a[], int n)
{
	float s = 0;
	int k = 0;
	for (int i = 0; i < n; i++)
		s += a[i];
	s /= n;
	for (int i = 0; i < n; i++)
		if (a[i] >= s)
			k++;
	return k;
}

int main()
{

	return 0;
}