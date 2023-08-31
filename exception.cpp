#include<iostream>
#include<string>
using namespace std;
int main()
{
    int y=10;
    try 
    {
        if(y>20)
        {
            cout<<"Access Granted"<<endl;
        }         
        else
        {
            throw 404;// should be an integer 
        }
    }
    catch(int x)
    {
        cout<<"Access Declined: Age is less than 20"<<endl;
        cout<<"Error Number"<<x<<endl;
    }
    
}