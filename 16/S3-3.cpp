#include <iostream>

using namespace std;

int multiplu(int n, int a[], int k)
{
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % k == 0)
            s++;
    }
    return s;
}

int main()
{
    
    return 0;
}