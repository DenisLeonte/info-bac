#include <iostream>

using namespace std;

int main()
{
    int n, p, t = 0;
    cin>>n>>p;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            cout<<t*t<<" ";
            t += 2;
        }
        cout<<endl;
    }
    return 0;
}