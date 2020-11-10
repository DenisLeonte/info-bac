/*
a. ***
b. -1, -2
c. 
d. S1-2 pseudocod.txt
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (x > y)
		swap(x, y);
	if (x % 2 == 0)
		x++;
	while (x <= y)
	{
		x += 2;
		cout << '*';
	}
	return 0;
}