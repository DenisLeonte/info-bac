#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("nr.txt");
    int v[100], aux, n = 0;
    while(in>>aux)
    {
        if(aux >= 100)
            v[n] = aux;
            n++;
    }
    if(n != 0)
    {
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j<n - i - 1; j++)
            {
                if(v[j]>v[j + 1])
                {
                    int aux = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = aux;

                }
            }
        }
    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    }
    else
    {
        cout<<"NU EXISTA\n";
    }
    return 0;
}