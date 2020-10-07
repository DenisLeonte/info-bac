#include <iostream>

using namespace std;

int cif(int x, int a)
{
    int b = 0;
    while(x)
    {
        int uc = x % 10;
        x /= 10;
        if(uc == a)
            b++;
    }
    return b;
}

int main()
{
    int n, v[10];
    cin>>n;
    //init
    for(int i = 0; i <= 9;i ++)
    {
        v[i] = cif(n,i);
    }
    //check
    bool ok = true;
    for(int i = 0; i <= 9; i++)
    {
        if(v[i] % 2 != 0)
        {
            ok = false;
        }
    }
    int s = 0,k = 1;
    if(ok)
    {
        for(int i = 1; i <= 9; i++)
            {
                int aux = v[i];
                while(aux >= 1)
                {
                    s = s*k + i;
                    aux /= 2;
                    k *= 10;
                }
            }
    }
    cout<<s<<endl;
    return 0;
}