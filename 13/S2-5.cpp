#include <iostream>

using namespace std;

int main()
{
    int a[25][25];
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i + j - 1 == n)
                a[i][j] = 0;
            if(i + j - 1 < n)
                a[i][j] = j;
            if(i + j - 1 > n)
                a[i][j] = n - i + 1;
        }
    }    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}