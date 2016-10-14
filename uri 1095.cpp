#include<iostream>
using namespace std;
int main()
{
    int I,J;
    for(I=1,J=60;J>=0;I+=3,J-=5)
    {
        cout<<"I="<<I<<' '<<"J="<<J<<endl;
    }
    return 0;
}
