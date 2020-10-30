#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    getline(cin, text);
    int len = text.length();
    for(int i = len; i >= 0; i--)
    {
        if(text[i] != 'a' || text[i] != 'e' || text[i] != 'i' || text[i] != 'o' || text[i] != 'u' || 
        text[i] != 'A' || text[i] != 'E' || text[i] != 'I' || text[i] != 'O' || text[i] != 'U'){
            text.erase(i-2,1);
            break;
        }
    }
    cout<<text<<endl;
}