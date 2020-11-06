#include <iostream>

using namespace std;

int main()
{
    int a[16][16];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j || i + j + 1 == n)
                a[i][j] = 0;
            if(j > i && i+j+1 < n)
                a[i][j] = 1;
            if((i > j && i + j + 1 < n) || (j > i && i + j + 1 > n))
                a[i][j] = 3;
            if(i > j && i + j + 1 > n)
                a[i][j] = 2;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}