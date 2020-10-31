#include <iostream>

using namespace std;

int main()
{
    int n,k = 9;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        int c = (x / 10) % 10;
        if(c < k)
            k = c;
    }
    cout<<k;
    return 0;
}