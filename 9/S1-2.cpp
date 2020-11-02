/*
a. 1
b. 1000
c. S1-2 pseudocod.txt
d. 
*/
#include <iostream>

using namespace std;

int main()
{
    int n, s = 10;
    cin>>n;
    while(n > 0)
    {
        if(n%10 < s)
            s = n % 10;
        else
            s = -1;
        n /= 10;
    }
    cout<<s<<endl;
    return 0;
}