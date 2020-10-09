/*
a. 2020
b.
*/
#include <iostream>

int main()
{
    int n,p = 1, m = 0, k = 0, x;
    cin>>n;
    while(x != 0)
    {
        cin>>x;
        for( int i = 1; i <=k; i++)
        {
            x /= 10;
        }
        if(x != 0)  c = x % 10;
        else    c = n % 10;
        m = c * p + m;
        n /= 10;
        p *= 10;
        k++;
    }
    return 0;
}