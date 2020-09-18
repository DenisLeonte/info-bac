/*
a. 17 15 13 11 9 7 5
b. -1 1; 1 -1; 2 -2; -2 2;
c.  ...
    while(b != a){
        if(b % 2 != 0)
            cout<<b<<' ';
        b--;
    }
    ...
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    if(a < b)
        swap(a,b);
    for(int x = a; x >=b; x--)
        if(x % 2 != 0)  cout<<x<<' ';
    cout<<endl;
    return 0;
}