#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    int Max = 0;
    int v[100] = {0};
    ifstream in("numere.txt");
    in>>n;
    for(int i = 0; i < n; i++)
    {
        int aux;
        in>>aux;
        v[aux]++;
        if(aux > Max)
            Max = aux;
    }
    for(int i = 0; i <= Max; i++)
    {
        if(v[i] == 1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}