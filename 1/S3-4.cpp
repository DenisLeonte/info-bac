#include <iostream>

using namespace std;

int sub(int v[], int n, int a)
{
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] < a)
            k++;
    }
    return k;
}

int main()
{
    int v[100], n, aux;
    for(int i = 0; i < n; i++)
        {
            cin>>aux;
            v[i] = aux;
        }
    int a[100];
    for(int i = 0; i < n; i++)
    {
        a[i] = sub(v,n,v[i]);
    }
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j] && i != j)
                {
                    found = true;
                    break;
                }
        }
    }
    if(!found)  cout<<"DA\n";
    else    cout<<"NU\n";
    return 0;
}