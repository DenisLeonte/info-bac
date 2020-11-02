#include <iostream>

using namespace std;

int main()
{
    int a[24][24];
    int n, s = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = (s % 9) + 1;
            s++;
        }
    }

    for(int i = 0; i < n; i++)  cout<<a[0][i]<<" ";
    for(int i = 1; i < n; i++)  cout<<a[i][n-1]<<" ";
    for(int i = n - 2; i >= 0; i--)  cout<<a[n-1][i]<<" ";
    for(int i = n - 2; i >= 1; i--)  cout<<a[i][0]<<" ";
    cout<<endl;
    return 0;
}