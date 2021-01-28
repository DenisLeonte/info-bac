/*
a. 555
b. 998
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y = 0;
    cin>>x;
    do
    {
        y = y * 10 + 9 - x % 10;
    }while(x <= y || y == 0);
    cout<<y<<endl;
    return 0;
}