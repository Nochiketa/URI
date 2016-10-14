#include<iostream>
using namespace std;
int main()
{
    int X,i;
    cin>>X;
    if(X%2==0)
    {
        for(i=X+1;i<=X+12;i+=2)
        cout<<i<<endl;
    }
    else
    {
        for(i=X;i<=X+10;i+=2)
        cout<<i<<endl;
    }

    return 0;
}
