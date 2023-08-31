// methods can be created in two ways
//inside function
//outside function
#include<iostream>
#include<string>
using namespace std;
// inside method
class car
{
    public:
    string name;
    int numberplate;
    void details()
    {
        cout<<name<<" "<<numberplate<<endl;
    }
};
//outside function
class Car
{
    public:
    int number;
    string name;
    void info();
};
void Car::info()
{
    cout<<number<<" "<<name<<endl;
}
int main()
{
    car myCar;
    myCar.name="audi";
    myCar.numberplate=7781;
    myCar.details();
    Car getinfo;
    getinfo.name="BMW";
    getinfo.number = 112003;
    getinfo.info();

}