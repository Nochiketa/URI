#include<iostream>
using namespace std;
int main()
{
    int N,Y,f,R,D;
    cin>>N;
    Y=N/365; f=N%365;
    R=f/30;
    D=f%30;
    cout<<Y<<' '<<"ano(s)"<<endl; ///years..
    cout<<R<<' '<<"mes(es)"<<endl; ///months...
    cout<<D<<' '<<"dia(s)"<<endl; ///days...
    return 0;
}
