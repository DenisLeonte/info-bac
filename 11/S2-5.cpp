#include <iostream>

using namespace std;

int main()
{
    int a[10][10];
    int n,m,maxx = 0;
    cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        int minn = a[i][0]
        for(int j = 1; j < m; j++)
        {
            if(a[i][j]<minn)
                minn = a[i][j];
        }
        if(minn>maxx)
            maxx = minn;
    }
    cout<<maxx<<endl;
    return 0;
}