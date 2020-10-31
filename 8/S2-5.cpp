#include <iostream>

using namespace std;

int main()
{
    int a[21][21];
    int n, p, aux = 1;
    cin>>n>>p;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            a[i][j] = aux * aux;
            aux += 2;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}