#include <iostream>

using namespace std;

int main()
{
    int n;
    int hash[999];
    cin>>n;
    for(int i = 0; i <= 999; i++)
        hash[i] = 0;
    cout<<"OK\n";
    while(n != 0)
    {
        for(int i = 2; i <= n; i++)
        {
            if(n % i == 0)
            {
                hash[i]++;
                n/=i;
                break;
            }
        }
        if(n == 1)
            break;
    }
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s+=hash[i];
    }
    cout<<hash[4]<<endl;
    return 0;
}