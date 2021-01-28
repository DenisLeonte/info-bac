#include <iostream>

using namespace std;

int main()
{
    int n;
    int v[24][24];
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i + j <= n + 1)   v[i][j] = 1;
    	    else
            {
                if(i >= j)   v[i][j] = i;
                else    v[i][j] = j;
            }
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}