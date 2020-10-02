/*
a. 599350
b. 2 5 7 3 1 0
c. S1-2 pseudocod.txt
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin>>z>>x;
    while(x > 0)
    {
        cin>>y;
        if(z < y - x)   cout<<x % 10;
        else    cout<<y % 10;
        x = y;
    }
    return 0;
}
