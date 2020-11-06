#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("numere.txt");
    int a[10] = {0};
    int aux;
    while(in>>aux)
    {
        while(aux>0)
        {
            int c = aux % 10;
            a[c]++;
            aux /= 10;
        }
    }
    for(int i = 9; i >= 0; i--)
    {
        if(a[i] != 0)
        {
            for(int j = 0; j < a[i]; j++)
            {
                cout<<i;
            }
        }
    }
    cout<<endl;
}