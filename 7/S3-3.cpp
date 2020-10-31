#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("bac.txt");
    int v[300];
    int n;
    cin>>n;
    for(int i = 0; i < n * 3; i++)
    {
        cin>>v[i];
    }
    int __par_it__= -1;
    int __imp_it__= -1;
    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0)
        {
            __par_it__= i;
            break;
        }
    }
    for(int i = n * 3; i > n * 2; i--)
    {
        if(v[i] % 2 == 1)
        {
            __imp_it__= i;
            break;
        }
    }
    if(!(__par_it__ == -1 || __imp_it__ == -1))
    {
        int aux = v[__par_it__];
        v[__par_it__] = v[__imp_it__];
        v[__imp_it__] = aux;
    }
    for(int i = 0; i < n * 3; i++)
    {
        out<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}