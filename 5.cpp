/*
a. 1
b. [100;899]
c.
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y = 0, z;
    cin>>x>>z;
    do
    {
        y = y * 10 + x % 10;
        x /= 100;
    } while (x != 0);
    while(y * z > 0 && y % 10 == z % 10)
    {
        y /= 10;
        z /= 10;
    }
    if(y + z == 0)  cout<<"1\n";
    else    cout<<"0\n";
    return 0;
}