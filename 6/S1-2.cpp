/*
a. 9
b. 6789
c. S1-2 pseudocod.txt
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,s = -1;
    cin>>n;
    while(n > 0)
    {
        if(n%10 > s)    s = n % 10;
        else    s = 11;
        n /= 10;
    }
    cout<<s;
    return 0;
}