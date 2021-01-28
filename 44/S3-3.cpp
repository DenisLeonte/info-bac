#include <iostream>

using namespace std;

void P(int a, int b)
{
    if(a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    if(a <= 2)
        cout<<4<<" ";
    for(int i = 3; i <= b; i++)
    {
        bool prim = true;
        for(int j = 2; j <=i/2; j++)
        {
            if(i % j == 0)
            {
                prim = false;
                break;
            }
        }
        if(prim && i * i <= b)
            cout<<i * i<<" ";
    }
    cout<<endl;
}

int main()
{
    P(2,40);
    return 0;
}