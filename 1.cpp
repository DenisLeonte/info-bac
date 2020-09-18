/*
a. 963
b. 67, 65, 61
c. ...
    do{
        ...
    }while(n>0);
d.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, z = 0, p = 1;
    cin>>n;
    while(n > 0)
    {
        int c = n % 10;
        n /= 10;
        if(c % 3 == 0)
        {
            z += p * (9 -c);
            p *= 10;
        }
    }
    cout << z << endl;
    return 0;
}