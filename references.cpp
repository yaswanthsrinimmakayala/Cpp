#include<iostream>
using namespace std;
int main()
{
    string str = "Pizza";
    string &str2 = str;
    cout<<str2<<endl; // value stored
    cout<<&str2<<endl;// address
}