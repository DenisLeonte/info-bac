#include <iostream>

using namespace std;

int main()
{
	char s[251];
	cin.getline(s, 250);
	int i = 1;
	while(s[i])
	{
		if (s[i] == s[i - 1] && s[i] != '*')
			cout << s[i] << s[i] << endl;
		i++;
	}
	return 0;
}