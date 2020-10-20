#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    ifstream in("bac.txt");
    int n, aux;
    in>>n;
    for(int i = 0; i < n; i++)
    {
        in>>aux;
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