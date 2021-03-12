#include <iostream>
#include <fstream>

using namespace std;

void cifre(int a, int &b)
{
    bool frec[10] = {false};
    while(a)
    {
        int uc = a%10;
        frec[uc] = true;
        a /= 10;
    }
    b = 0;
    for(int i = 1; i <= 9; i++)
    {
        if(frec[i])
        {
            b*=10;
            b+=i;
        }
    }
}

int main()
{
    ifstream in("date.in");
    int aux;
    while(in>>aux)
    {
        int b;
        cifre(aux,b);
        if(aux == b)
        {
            cout<<aux<<" ";
        }
    }
    cout<<"\n";
    return 0;
}