#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("nr.txt");
    int v[100];
    int n, k = 0;
    in>>n;
    for(int i = 0; i < n; i++)
    {
        int aux;
        in>>aux;
        if(aux > 0)
        {
            v[k] = aux;
            k++;
        }
    }
    for(int i = 0; i < k - 1; i++)
        for(int j = 0; j < k-1; j++)
            if(v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
    for(int i = 0; i < k; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}