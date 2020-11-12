#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int a[100], b[100], c[200];
	int n, m, k;
	ifstream in("nr1.txt");
	in >> n;
	for (int i = 0; i < n; i++)
	{
		in >> a[i];
	}
	in.close();
	ifstream inn("nr2.txt");
	inn >> m;
	for (int i = 0; i < m; i++)
	{
		inn >> b[i];
	}
	inn.close();
	int a_it = 0, b_it = 0, c_it = 0;
	while (a_it <= n && b_it <= m)
	{
		if (a[a_it] == b[b_it])
		{
			c[c_it] = a[a_it];
			a_it++;
			c_it++;
			c[c_it] = b[b_it];
			b_it++;
			c_it++;
		}
		else if (a[a_it] < b[b_it])
		{
			c[c_it] = a[a_it];
			a_it++;
			c_it++;
		}
		else
		{
			c[c_it] = b[b_it];
			b_it++;
			c_it++;
		}
	}
	for (int i = 1; i < c_it; i++)
	{
		if (c[i] == c[i - 1])
			cout << c[i] << " ";
	}
	return 0;
}