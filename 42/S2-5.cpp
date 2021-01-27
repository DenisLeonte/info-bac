#include <iostream>

using namespace std;

int main()
{
    char s[40];
    cin>>s;
    for(int i = 0; i <= 40; i++)
    {
        if(strchr("aeiouAEIOU") == 1)
            cout<<s[i]<<" ";   
    }
    return 0;
}