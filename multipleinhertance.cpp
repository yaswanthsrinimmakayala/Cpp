// multilevel inhertance is different from multiple inhertance
#include<iostream>
#include<string>
using namespace std;
// a class can derived from any number of base classes, but we need to separate them 
// commas that is multiple inhertance
class baseclass1
{
    public:
    void function1()
    {
        cout<<"this is form one baseclass"<<endl;
    }
};
class baseclass2
{
    public:
    void function2()
    {
        cout<<"this is from second baseclass"<<endl;
    }
};
class derivedclass:public baseclass1,public baseclass2
{
    public:
    void function3()
    {
        cout<<"this is from derived class"<<endl;
    }
};
int main()
{
    derivedclass obj;
    obj.function1();
    obj.function2();
    obj.function3();
}