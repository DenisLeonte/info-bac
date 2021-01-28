#include <iostream>

using namespace std;

int main()
{
    int n;
    int v[23][23];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            if(i == j)
                v[i][j] = 2;
            if(i > j)
                v[i][j] = 3;
            if(i < j)
                v[i][j] = 1;
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}