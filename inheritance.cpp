#include<iostream>
#include<string>
using namespace std;
class base_class_parent
{
    public:
    int x=10;
    void print()
    {
        cout<<x<<endl;
    }
};
class derived_class_child:public base_class_parent
{
    public:
    int value = 123;
    void printf()
    {
        cout<<value<<endl;
    }
};
int main()
{
    derived_class_child obj;
    obj.print();
    cout<<obj.x<<endl;
    obj.printf();
    cout<<obj.value<<endl;  
}