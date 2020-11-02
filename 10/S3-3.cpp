#include <iostream>
#include <math.h>

using namespace std;

void sub(int n, int &a, int &b)
{
    int max_it;
    for(int i = n; i >=0; i--)
    {
        bool gasit = false;
        for(int j = 2; j < int(i / 2) ; j++)
        {
            if(i % j == 0)
            {
                gasit = true;
                break;
            }
        }

        if(!gasit)
        {
            max_it = i;
            a = i;
            break;
        }
    }
    for(int i = max_it - 1; i >=0; i--)
    {
        bool gasit = false;
        for(int j = 2; j < int(i / 2); j++)
        {
            if(i % j == 0)
            {
                gasit = true;
                break;
            }
        }

        if(!gasit)
        {
            max_it = i;
            b = i;
            break;
        }
    }
}

int main()
{
    int a, b;
    sub(28, a, b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
