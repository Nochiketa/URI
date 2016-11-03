#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==0) return 1;
    else return a*fact(a-1);
}
int main()
{
    int N;
    cin>>N;
    cout<<fact(N)<<endl;
    return 0;
}
