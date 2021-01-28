#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("numere.txt");
    bool v[10] = {false};
    int n;
    in>>n;
    for(int i = 0; i < n; i++)
    {
        int aux;
        in>>aux;
        while(aux>0)
        {
            int uc = aux % 10;
            v[uc] = true;
            aux /= 10;
        }
    }
    for(int i = 0; i <= 9; i++)
    {
        if(v[i])
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}