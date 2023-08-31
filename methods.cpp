#include<iostream>
using namespace std;
#include<string>
class car
{
    public:
    string name;
    void print()
    {
        cout<<"Mycollection"<<endl;
    }
};
int main()
{
    car details;
    details.print();
    details.name="Audi";
    cout<<details.name<<endl;
}