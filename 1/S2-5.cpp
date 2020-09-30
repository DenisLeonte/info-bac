#include <iostream>

using namespace std;

int main()
{
    int a[10][10];
    int n, m;
    cin>>n>>m;
    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(i <= j)    a[i][j] = i;
            else a[i][j] = j;
            cout<<a[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}