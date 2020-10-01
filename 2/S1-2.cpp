/*
a. 2211775
b. 1 19 28 37 0
c. S1-2 pseudocod.txt
d. 
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    while(x > 0)
    {
        cin>>y;
        if(x>y) cout<<x%10;
        else    cout<<y%10;
        x = y;
    }
    cout<<endl;
    return 0;
}