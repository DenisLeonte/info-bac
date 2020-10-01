#include <iostream>

using namespace std;

int main()
{
    int hash[999] = {0};
    int n = 90, s = 0;
    while(n!=1)
    {
        for(int i = 2; i<=n;i++)
        {
            if(n % i == 0)
            {
                hash[i]++;
                n /= i;
                break;
            }
        }
    }
    for(int i = 1; i<=n;i++)
    {
        s+=hash[i];
    }
    cout<<s<<endl;
    return 0;
}