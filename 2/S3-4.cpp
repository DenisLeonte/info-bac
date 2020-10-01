#include <iostream>

using namespace std;

int f(int n)
{
    int s = 0, d = 2;
    while(n > 1)
    {
        if(n % d == 0)
        {
            s++;
            n /= d;
        }
        else    d++;
    }
    return s;
}

int main()
{
    int x, aux;
    cin>>x;
    if(x<10)
    {
        if(f(x) == 1)   cout<<"DA\n";
        else    cout<<"NU\n";
    }
    else if(x < 100)
    {
        int a, b, aux2 = 0;
        aux = x;
        int uc = aux % 10;
        aux /= 10;
        aux2 = uc * 10 + aux;
        if(f(x) == f(aux2)) cout<<"DA\n";
        else    cout<<"NU\n";
    }
    else
    {
        int a,b,c;
        aux = x;
        a = aux%10;
        aux /= 10;
        b = aux%10;
        aux /= 10;
        c = aux%10;
        if(f(x) == 1 && f(a*100+c*10+b) == 1 && f(b*100+a*10+c) == 1 && f(b*100+c*10+a) == 1 && f(c*100+a*10+b) == 1 && f(c*100+b*10+a) == 1)   cout<<"DA\n";
        else cout<<"NU\n";
    }
    return 0;
}