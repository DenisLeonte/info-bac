/*
a. 27596
b. 674 523 11 0
c. 
d. S1-2 pseudocod.txt
*/
#include <iostream>

using namespace std;

int main()
{
    int x, n = 0, y, c;
    cin>>x;
    while(x != 0)
    {
        y = x;
        c = 0;
        while(y > 0)
        {
            if(y % 10 > c)
                c = y % 10;
            y /= 10;
        }
        n = n * 10 + c;
        cin>>x;
    }
    cout<<n<<endl;
    return 0;
}