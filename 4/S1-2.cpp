/*
a. 17 15 13 11 9 7 5 
b. (1, -1)(2, -1)(2, -2)(1,-2)
c. S1-2 pseudocod.txt
d.
*/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a < b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    for(int x = a; x >= b; x--)
    {
        if(x % 2 != 0)
            cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}