/*
a. 5
b. 13 65 91
c. S1-2 pseudocod.txt
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    while(x * y != 0)
    {
        if(x > y)
            x = x % y;
        else
            y = y % x;
    }
    cout<<x + y<<endl;
    return 0;
}