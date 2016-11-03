#include<iostream>
#include<cstdio>
#define PI 3.14159
using namespace std;

int main()
{
    float A,B,C,t,d,m,n,f;
    cin>>A>>B>>C;
    t=(A*C)/2;
    d=PI*C*C;
    m=(((A+B)/2)*C);
    n=B*B;
    f=A*B;

   printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", t, d, m, n, f);

    return 0;



}
