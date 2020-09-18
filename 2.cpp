/*
a. 2211775
b. 99 88 77 67 0
c. ...
    do{
        ...
    }while(n>0);
d.
*/
#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin>>x;
    while(x > 0)
    {
        cin>>y;
        if(x > y)   cout<<x % 10;
        else    cout<<y % 10;
        x = y;
    }
    cout << endl;
    return 0;
}