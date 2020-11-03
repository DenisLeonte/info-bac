#include <iostream>

using namespace std;

int main()
{
    int a[10] = {0};
    int n, aux;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>aux;
        int c = aux % 10;
        bool ok = true;
        while(aux != 0)
        {
            if(aux%10 != c)
            {
                ok = false;
                break;
            }
            aux /= 10;
        }
        if(ok)
        {
            a[c]++;
        }
    }
    for(int i = 1; i <= 9; i++)
    {
        if(a[i] != 0)
        {
            for(int j = 1; j <= a[i]; j++)
            {
                for(int k = 1; k <= 5; k++)
                {
                    cout<<i;
                }
                cout<<" ";
            }
        }
    }
    return 0;
}