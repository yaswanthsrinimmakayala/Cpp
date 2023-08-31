#include<iostream>
#include<string>
using namespace std;
class parent_base_class
{
    public:
    int x=78;
};
class child_derived_class:public parent_base_class
{
    public:
    void method1()
    {
        cout<<"i am from child class"<<endl;
    }
};
class grand_child_derived_class:public child_derived_class
{
    public:
    void method2()
    {
        cout<<"i am from grand child class"<<endl;
    }
};
int main()
{
    grand_child_derived_class obj;
    cout<<obj.x<<endl;
    obj.method1();
    obj.method2();
}