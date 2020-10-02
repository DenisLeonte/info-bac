#include <iostream>

using namespace std;

int main()
{
    int n, v[25][25];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                v[i][j] = 0;
                cout<<v[i][j]<<" ";
            }
            else
            {
                v[i][j] = n - j;
                cout<<v[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}