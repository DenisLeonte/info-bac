#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[100], b[100], c[200];
    int n = 0, m = 0, k = 0, aux;
    ifstream in("nr1.txt");
    while(in>>aux)
    {
        if(aux % 5 == 0)
        {
            a[n] = aux;
            n++;
        }
    }
    in.close();
    ifstream fin("nr2.txt");
    while(fin>>aux)
    {
        if(aux % 5 == 0)
        {
            b[m] = aux;
            m++;
        }
    }
    fin.close();
    for(int i = 0; i < n; i++)
    {
        bool found = false;
        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            c[k] = a[i];
            k++;
        }
    }
    for(int i = 0; i < m; i++)
    {
        bool found = false;
        for(int j = 0; j < n; j++)
        {
            if(b[i] == a[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            c[k] = b[i];
            k++;
        }
    }
    for(int i = 0; i < k; i++)
    {
        for(int j = i; j < k-i-1;j++)
        {
            if(c[j] > c[j + 1])
                swap(c[j], c[j + 1]);
        }
    }
    for(int i = 0; i < k; i++)
        cout<<c[i]<<" ";
    cout<<endl;
    return 0;
}