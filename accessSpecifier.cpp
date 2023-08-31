// access speicifiers
// public     can be accessed and modified outside the code
// private    cannot be accessed outside the class 
// protected cannot be accessed outside the class but  can be accessed in inhertance class
// but we can access the private members by creating a public method inside same class
// we will learn about encapsulation 
// by default all the members are belong to private if you forgot to give the  access specifier
// an error will be generated when we try to access a private element
// program

#include<iostream>
#include<string>
using namespace std;
class Myclass
{
    int z;
    public:
    int x;
    private:
    int y;
};
int main()
{
    Myclass cls;
    cls.x=10;
    cout<<cls.x<<endl;
    // cls.y=11;
    // cout<<cls.y<<endl; generate error
    // cls.x=11;
}