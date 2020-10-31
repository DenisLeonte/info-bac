/*
a. 22
b. 9735 3
c. S1-2 pseudocod.txt
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, k, nr = 0, p = 1;
    cin>>n>>k;
    while(n != 0 && k != 0)
    {
        if(n % 2 == 0)
        {
            nr+= (n % 10) * p;
            p *= 10;
        }
        else
        {
            k--;
        }
        n /= 10;
    }
    cout<<nr<<endl;
    return 0;
}