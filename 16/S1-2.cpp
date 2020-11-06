/*
a. ***#***
b. 12
c. 
d. S1-2 pseudocod.txt
*/
#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    cin>>n;
    for(int i = 1; i < n; i++)
    {
        if(i % 2 == 0)
            cout<<"#";
        for(int j = i + 1; j <= n; j++)
        {
            cout<<"*";
            s++;
        }
    }
    cout<<endl;
    cout<<s<<endl;
    return 0;
}