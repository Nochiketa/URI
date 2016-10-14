#include<iostream>
using namespace std;
int main()
{
    int N,i,count=0;
    for(i=1;i<=5;i++)
    {
        cin>>N;
        if(N%2==0)
            count++;
    }
    cout<<count<<' '<<"valores pares"<<endl;
    return 0;
}
