#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <string> a,b,c;
    int n;
    ifstream in("date.in");
    in>>n;
    for(int i = 1; i <= n; i++)
    {
        string aux;
        in>>aux;
        a.push_back(aux);
    }
    for(int i = 1; i <= n; i++)
    {
        string aux;
        in>>aux;
        b.push_back(aux);
    }
    
    for(int i = 0; i < n; i++)
    {
        int ai,bi;
        ai = stoi(a[i]);
        bi = stoi(b[i]);
        if(ai<bi)
        {
            string ci = a[i]+b[i];
            c.push_back(ci);
        }
        else
        {
            string ci = b[i]+a[i];
            c.push_back(ci);
        }
    }
    for(auto &it:c)
    {
        cout<<it<<" ";
    }
    return 0;
}