/*
a. ABABABAB
b. 20
c. 
d. S1-2 pseudocod.txt
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x>y)
    {
        x -= y;
        y += x;
        x = y - x;
    }
    while(x >= y)
    {
        cout<<"A";
        x -= y;
        cout<<"B";
    }
    cout<<endl;
    return 0;
}