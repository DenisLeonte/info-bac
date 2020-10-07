#include  <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100], aux, i = 0;
    bool found = false;
    ifstream in("nr.txt");
    while(in>>aux)
    {
        if(aux<=99)
            {
                found = true;
                v[i] = aux;
                i++;
            }
    }
    for(int j = 0; j < i - 1 ;j++)
    {
        for(int k = 0; k < i - j - 1; k++)
        {
            if(v[k] < v[k + 1])
            {
                swap(v[k], v[k + 1]);
            }
        }
    }
    if(found)
        for(int j = 0; j <i; j++)
        {
            cout<<v[j]<<' ';
        }
    else
        cout<<"NU EXISTA";
    cout<<endl;
    return 0;
}