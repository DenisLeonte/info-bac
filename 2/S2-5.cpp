#include <iostream>

using namespace std;

int main()
{
    char a[20], b[40];
    int k,n;
    cin.getline(a,20);
    char aux = a[0];
    int i = 0;
    do
    {
        aux = a[i];
        if(aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u')
        {
            char AUX = aux - 32;
            cout<<aux<<AUX;
        }
        else
        {
            cout<<aux;
        }
        i++;    
    }while(aux);
    cout<<endl;
    return 0;
}