#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[10] = {0};
    int n;
    ifstream in("numere.txt");
    in>>n;
    for(int i = 1; i <= n; i++)
    {
        int aux;
        in>>aux;
        v[aux]++;
    }
    for(int i = 9; i >= 0; i--)
    {
        if(v[i] != 0)
            {
                for(int j = 0; j < v[i]; j++)
                {
                    cout<<i;
                }
            }
    }
    cout<<endl;
    return 0;
}