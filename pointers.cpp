#include<iostream>
using namespace std;
#include<string>
int main()
{
    string food = "pizza";
    string* ptr =  &food;
    cout<<ptr<<endl; // address
    cout<<&ptr<<endl;//address
    cout<<*ptr<<endl;//value
    // we can change the value of the pointer so that the value of food also changes
    *ptr="Hamburger";
    cout<<*ptr<<endl;
    cout<<food<<endl;
}