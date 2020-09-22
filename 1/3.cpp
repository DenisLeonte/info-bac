#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    bool found = false;
    cin>>n;
    ifstream in("bac.txt");
    for(int i = 0; i < n; i++)
    {
        int x;
        in>>x;
        if(x % n == 0)
        {
            cout<<x<<" ";
            found = true;
        }
    }
    if(!found)
        cout<<"NU EXISTA";
    return 0; 
}