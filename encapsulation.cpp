// since we cannot access the private members outside the class
// we will create a public method
#include<iostream>
#include<string>
using namespace std;
class earnings
{
    int salary;// private by default
    public:
    void setSalary(int s)
    {
        salary=s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    earnings earn;
    earn.setSalary(10000000);
    cout<<earn.getSalary()<<endl;
}