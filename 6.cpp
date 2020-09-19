/*
a. 9
b. 4351
c.  ...
    do{
        ...
    }while(n > 0);
    ...
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, s = -1;
    cin>>n;
    while(n > 0)
    {
        if(n % 10 > s)  s = n % 10;
        else    s = 11;
        n /= 10;
    }
    cout<<s<<endl;
    return 0;
}