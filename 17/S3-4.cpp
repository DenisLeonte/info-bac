#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("numere.txt");
    int n,a[10000];
    in>>n;
    for(int i = 0; i < n; i++)
    {
        in>>a[i];
    }
    int prim = a[0];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 -i; j++)
        {
            if(a[i] > a[i + 1])
            {
                swap(a[i], a[i+1]);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == prim)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}