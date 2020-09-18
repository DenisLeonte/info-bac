/*
a. 599350
b. 9 2 7 3 1 0
c.  ...
    do{
        ...
    }while(x > 0);
    ...
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int x, z, y;
    cin>>z>>x;
    while(x > 0)
    {
        cin>>y;
        if(z < y - x)   cout<<x%10;
        else    cout<<y%10;
        x = y;
    }
    cout << endl;
    return 0;
}