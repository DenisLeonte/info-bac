/*
a. 9432
b. 9456 96445
c. S1-2 pseudocod.txt
d.
*/
include <iostream>

using namespace std;

int main()
{
    int n, nr = 0;
    cin>>n;
    for(int a = 9; a >= 0; a--)
    {
        int m = n;
        while(m != 0 && m % 10 != a)
        {
            m /= 10;
        }
        if(m != 0)
        {
            nr = (nr * 10) + (m % 10); 
        }
    }
    cout<<nr<<endl;
    return 0;
}