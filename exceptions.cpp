#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x =20;
    try{
    if(x>21)
    {
        cout<<"AccessGranted"<<endl;
    }
    else{
        throw "error";
    }}
    catch(...)// we can use ... to handle any type of exception
    {
        cout<<"x is less than 21"<<endl;
    }

}