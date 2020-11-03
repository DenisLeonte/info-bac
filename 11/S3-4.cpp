#include <iostream>

using namespace std;

int sum(int n)
{
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            s += i;
        }
    }
    return s;
}

int main()
{
    int n, aux, s = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>aux;
        if(sum(aux) == aux + 1)
            s++;
    }
    cout<<s<<endl;
    return 0;
}