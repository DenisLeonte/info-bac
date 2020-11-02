#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("produse.txt");
    int v[10000] = {0};
    int a,b,c;
    while(in>>a>>b>>c)
    {
        v[a] += b*c;
    }
    for(int i = 0; i<=9999; i++)
    {
        if(v[i] != 0)
            cout<<i<<" "<<v[i]<<endl;
    }
    return 0;
}
