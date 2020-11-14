/*
a. 2,8333
b. S1-2 pseudocod.txt
c. 
d. 
*/
#include <iostream>

using namespace std;

int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	if (b == 0)
		cout << "Gresit" << endl;
	else
	{
		cout << a / b;
		if (n > 0 && a % b != 0)
			cout << ",";
		a = a % b;
		int i = 0;
		do
		{
			cout << (a * 10) / b;
			a = (a * 10) % b;
			i++;
		} while (i != n || a != 0);
	}
	return 0;
}