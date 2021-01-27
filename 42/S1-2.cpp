/*
1. 80
2. 1 2 4 5 7 8
3. S1-2 pseudocod.txt
4.
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y;
    while(y>0)
    {
        z = x % y;
        x = y * 2;
        y = 2 * z;
    }
    cout<<x<<endl;
    return 0;
}