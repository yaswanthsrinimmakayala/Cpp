#include<iostream>
using namespace std;
void function1(int num)
{
    cout<<num<<endl;
}
void function1(string name)
{
    cout<<name<<endl;
}
void function1(int num2,string name)
{
    cout<<num2<<" "<<name<<endl;
}
int main()
{
    function1(12345);
}