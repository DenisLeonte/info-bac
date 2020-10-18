#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string text;
    getline(cin, text);
    int len = text.length();
    text[0]-=32;
    for(int i = 1; i <= len; i++)
    {
        if(text[i - 1] == ' ' && text[i] != ' ')
            text[i] -= 32;
    }
    cout<<text<<endl<<len<<endl;
    return 0;
}