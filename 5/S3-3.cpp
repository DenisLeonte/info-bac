#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("nr.txt");
    int n;
    cin>>n;
    while(n != 0)
    {
        out<<n<<" ";
        n /= 10;
    }
    return 0;
}