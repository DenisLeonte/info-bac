#include <iostream>

using namespace std;

void sub(int n, int k)
{
    cout<<endl;
    for(int i = n; i >= 1; i--)
    {
        cout<<i * k<<" ";
    }
}

int main()
{
    sub(3,5);
    cout<<endl;
    return 0;
}