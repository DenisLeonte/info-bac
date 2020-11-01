#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

void comb(int a[], int req_len, int start, int curr_len, bool check[], int len,int s)
{
    if(curr_len > req_len)
        return;
    else if(curr_len == req_len)
    {
        for(int i = 0; i < len; i++)
        {
            if(check[i] == true)
            {
                cout<<a[i]<<"+";
            }
        }
        cout<<"="<<s<<endl;
        return;
    }
    if(start == len)
    {
        return;
    }
    check[start] = true;
    comb(a, req_len, start + 1, curr_len + 1, check, len, s);
    check[start] = false;
    comb(a, req_len, start + 1, curr_len, check, len, s);
}

int main()
{
    ifstream in("bac.txt");
    bool check[50];
    int v[50], ok[50];
    int n, k = 0, s = 0;
    in>>n;
    for(int i = 0; i<n;i++)
    {
        in>>v[i];
        check[i] = false;
    }
    for(int i = 0; i<n;i++)
    {
        int aux = sqrt(v[i]);
        if(aux * aux == v[i])
        {
            ok[k] = v[i];
            k++;
        }
    }
    for(int i = 0; i < k; i++)
    {
        s+=ok[i];
    }
    comb(v, k, 0, 0, check, k, s);
    return 0;
}