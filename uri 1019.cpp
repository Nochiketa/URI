#include<iostream>
using namespace std;
int main()
{
    int N,h,M,s,k;
    cin>>N;
    M=N/60; M%=60;
    h=N/3600;
    s=N%60;
    cout<<h<<':'<<M<<':'<<s<<endl;
    return 0;
}
