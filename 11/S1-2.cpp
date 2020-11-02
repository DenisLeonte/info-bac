/*
a. 15
b. 88888
c. 
d. S1-2 pseudocod.txt
*/
#include <iostream>

using namespace std;

int main()
{
    int n, k , c, p = 1;
    cin>>n>>k;
    while(n > 0 && k > 0)
    {
        c = n % 10;
        if(c % 2 == 1)
            p *= c;
        n /= 10;
        k--;
    }
    cout<<p<<endl;
    return 0;
}