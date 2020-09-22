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
    int v[100], n, a;
    cout<<sub(v, n, a);
    return 0;
}