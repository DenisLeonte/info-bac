/*
a. 17396
b. 300 275 18 0
c. 
d. S1-2 pseudocod.txt
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y = 0;
    cin>>x;
    while(x != 0)
    {
        while(x > 9)
            x /= 10;
        y = y * 10 + x;
        cin>>x;
    }
    cout<<y;
    return 0;
}