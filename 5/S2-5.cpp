#include <iostream>

using namespace std;

int main()
{
    int v[10][10];
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(i >= j)
            {
                v[i][j] = i;
                cout<<v[i][j]<<" ";
            }
            else
            {
                v[i][j] = j;
                cout<<v[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}