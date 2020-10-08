/*
a. 1
b. 101 102 103
c. S1-2 pseudocod.txt
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin>>x>>z;
    y = 0;
    do
    {
        y = y * 10 + x % 10;
        x /= 100;
    }while( x != 0);
    while( y * z > 0 && y % 10 == z % 10)
    {
        y /= 10;
        z /= 10;
    }
    if(y + z == 0)  cout<<"1\n";
    else    cout<<"0\n";
    
    return 0;
}