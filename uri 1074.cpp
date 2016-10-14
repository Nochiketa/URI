#include<iostream>
using namespace std;
int main()
{
    int N,X,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
    cin>>X;
    if(X==0) cout<<"NULL"<<endl;
    else if(X%2==0 && X>1) cout<<"EVEN POSITIVE"<<endl;
    else if(X%2==0 && X<1) cout<<"EVEN NEGATIVE"<<endl;
    else if(X%2!=0 && X>1) cout<<"ODD POSITIVE"<<endl;
    else if(X%2!=0 && X<1) cout<<"ODD NEGATIVE"<<endl;
    }

    return 0;
}
