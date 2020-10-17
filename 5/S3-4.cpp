#include <iostream>

using namespace std;

int f(int a)
{
    int Min = a;
    while(a >= 2)
    {
        for(int i = 2; i <= a; i++)
        {
            if(a % i == 0)
            {
                a /= i;
                if(i < Min)
                {
                    Min = i;
                }
            }
        }
    }
    return Min;
}

int main()
{
    int v[100];
    int n,k = 0;
    bool found = false;
    cin>>n;
    while(n != 0)
    {
        int aux;
        cin>>aux;
        if(f(aux) == aux)
            {
                found = true;
                v[k] = aux;
                k++;
            }
        n--;
    }
    if(found)
    {
        for(int i = 0; i < k; i++)
        {
            for(int j = i; j < k - 1; j++)
            {
                if(v[j] > v[j + 1])
                {
                    swap(v[j], v[j + 1]);
                }
            }
        }
    }
    for(int i = 0; i < k; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}