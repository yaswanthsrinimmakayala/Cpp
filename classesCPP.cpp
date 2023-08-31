#include<iostream>
#include<string>
using namespace std;
class car
{
    public://  access specifier learn in accessspecifier.cpp
    int num;
    string name;
};
int main()
{
    car mycar;//object--> mycar
    mycar.name="volvo";
    mycar.num=123;
    cout<<mycar.name<<endl;
    cout<<mycar.num<<endl;
    // we gonna create multiple object on class car
    car details;
    details.name="audi";
    details.num=2344;
    cout<<details.name<<endl;
    cout<<details.num<<endl;
    // we can create as many objects as we want on an object


}