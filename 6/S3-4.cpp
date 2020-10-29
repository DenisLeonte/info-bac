#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int prec, aux, n = 1;
    in>>prec;
    while(in>>aux)
    {
        if(aux == prec)
        {
            n++;
        }
        else
        {
            cout<<prec<<" "<<n<<" ";
            n = 1;
        }
        prec = aux;
    }
    cout<<prec<<" "<<n<<" ";
    return 0;
}