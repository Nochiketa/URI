#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long int fact(unsigned long long int a)
{
    if(a==0) return 1;
    else return a*fact(a-1);
}
int main()
{
    unsigned long long int M,N;
    while(scanf("%llu %llu", &M, &N)!=EOF)
    {
        cout<<fact(M)+fact(N)<<endl;
    }
    return 0;
}
