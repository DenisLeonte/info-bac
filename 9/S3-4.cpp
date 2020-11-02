#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    bool v[1000] = {false};
    int max_it, aux;
    while(in>>aux)
    {
        v[aux] = true;
    }
    for(int i = 999; i >= 0; i--)
    {
        if(v[i] == false)
        {
            max_it = i;
            cout<<i<<" ";
            break;
        }
    }
    for(int i = max_it - 1; i >= 0; i--)
    {
        if(v[i] == false)
        {
            cout<<i<<" ";
            break;
        }
    }

    return 0;
}