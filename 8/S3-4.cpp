#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[100], b[100];
    int n, m;
    ifstream in("bac.txt");
    in>>n>>m;
    for(int i = 0; i < n; i++)
    {
        in>>a[i];
    }
    for(int i = 0; i < m; i++)
    {
        in>>b[i];
    }

    bool par = true;
    int i = 0, j = 0,big_it = 0;
    if(a[i] > b[j])
    {
        cout<<b[j]<<" "<< a[i]<<" ";
        j++;
        i++;
        par = true;
    }
    else
    {
        cout<<a[i]<<" "<<b[j]<<" ";
        i++;
        j++;
        par = false;
    }

    while(i <= n && j <= m)
    {
        if(par)
        {
            if(b[j] > a[big_it])
            {
                cout<<b[j]<<" ";
                par = false;
                big_it = j;
            }
            j++;
        }
        else
        {
            if(a[i] > b[big_it])
            {
                cout<<a[i]<<" ";
                par = true;
                big_it = i;
            }
            i++;
        }
    }
    cout<<endl;
    return 0;
}
