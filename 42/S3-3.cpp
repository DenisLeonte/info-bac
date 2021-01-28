#include <iostream>

using namespace std;

int P(int v[], int n, int k)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            if(v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    int s = 0;
    for(int i = n - 1; i > n - k; i--)
    {
        s+=v[i];          
    }
    return s;
}

int main()
{
    return 0;
}