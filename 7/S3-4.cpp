#include <iostream>

using namespace std;

int sub(int n)
{
    if(n<=5)
        return n;
    else
    { 
        int v[n];
        for(int i = 0; i <= 5; i++)
        {
            v[i] = i;
        }
        for(int i = 6; i <= n; i++)
        {
            v[i] = v[i - 1] * 2;
            if(v[i]>n)
            {
                return v[i - 1];
            }
        }
    }
    
}

int main()
{
    int s;
    cin>>s;
    while(s > 1)
    {
        int aux = sub(s);
        s-=aux;
        cout<<aux<<" ";
    }
    cout<<endl;
    return 0;
}