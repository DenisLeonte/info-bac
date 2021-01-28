#include <iostream>

using namespace std;

int P(int n, int v[])
{
    int s = 0;
    for(int i = 0; i < n; i = i + 2)
    {
        if(v[i] % 2 != 0)
            s+=v[i];
    }
    return s;
}

int main()
{
    return 0;
}