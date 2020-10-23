#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    int n, aux;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>aux;
        a.push_back(aux);
    }
    int j = n;
    while(j != 0)
    {
        int s = 0;
        for(int i = 0; i<j; i++)
        {
            s+=a[i];
        }
        cout<<s<<endl;
        j--;
    }
    return 0;
}