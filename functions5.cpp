#include<iostream>
//  PASS BY REFERENCE
using namespace std;
void swap(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}
void swap1(int a,int b)
{
    int v=a;
    a=b;
    b=v;
}
// this function doesn't effect the values

int main()
{
    int fn=9;
    int sn=8;
    swap(fn,sn);
    cout<<fn<<endl;
    cout<<sn<<endl;
    int zn=2;
    int kn=1;
    swap1(zn,kn);
    cout<<zn<<endl;
    cout<<kn<<endl;
}