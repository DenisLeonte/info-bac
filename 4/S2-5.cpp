#include <iostream>

using namespace std;

int main()
{
    int a[25][25];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == n - 1 - i)
            {
                a[i][j] = 0;
                cout<<a[i][j]<<' ';
            }
            else
            {
                a[i][j] = n - i;
                cout<<a[i][j]<<' ';
            }
            
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}