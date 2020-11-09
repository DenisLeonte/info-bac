#include <iostream>

using namespace std;

int interval(int a[], n)
{
    int s = 0, int minn = a[0], int maxx = a[n - 1];
    if(minn > maxx)
        swap(minn,maxx);
    for(int i = 0; i < n; i++)
        if(a[i]>=minn && a[i]<=maxx)
            s++;
    return s;
}

int main()
{
    
    return 0;
}
