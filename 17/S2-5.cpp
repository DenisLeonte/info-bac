#include <iostream>

using namespace std;

int main()
{
    int a[20][20];
    int n, aux = 1;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = j + aux;
        }
        aux++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}