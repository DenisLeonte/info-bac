/*
a. 5
b. 63 64
c. 
d. S1-2 pseudocod.txt
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, k = 0;
    cin>>a>>b;
    for(int i = a, i <= b; i++)
    {
        int n = i;
        int c = 0;
        while(n > 0)
        {
            if(n % 2 == 1)
                c++;
            n /= 10;
        }
        if(c > 0)
            k++;
    }
    cout<<k<<endl;
    return 0;
}