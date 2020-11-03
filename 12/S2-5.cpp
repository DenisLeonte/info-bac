#include <iostream>

using namespace std;

int main()
{
    int a[26][26];
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            a[i][j] = (i * j)%10;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}