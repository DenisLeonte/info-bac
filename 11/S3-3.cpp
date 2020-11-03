#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("numere.txt");
    int n, aux, prec;
    in>>n>>prec;
    cout<<prec<<" ";
    while(in>>aux)
    {
        if(prec >= aux)
        {
            cout<<prec<<" ";
        }
        else
        {
            cout<<aux<<" ";
            prec = aux;
        }
    }
    cout<<endl;
    return 0;
}