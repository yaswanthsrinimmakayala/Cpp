//accessing protected members
#include<iostream>
#include<string>
using namespace std;
class Myclass
{
    protected:
    int Salary=123;
};
class derived:public Myclass
{
    public:
    void setSalary(int x)
    {
        Salary=x;
    }
    void getSalary()
    {
        cout<<Salary<<endl;
    }
};
int main()
{
    derived obj;
    obj.getSalary();
    obj.setSalary(100);
    obj.getSalary();
}