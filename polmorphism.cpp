#include<iostream>
#include<string>
using namespace std;
class Animal
{
    public:
    void Sounds()
    {
        cout<<"The animal sounds like"<<endl;
    }
};
class dog: public Animal
{
    public:
    void Sounds()
    {
        cout<<"bow bow"<<endl;
    }
};
class pig:public Animal
{
    public:
    void Sounds()
    {
        cout<<"wee wee"<<endl;
    }
};
int main()
{
    Animal myanimal;
    pig mypig;
    dog mydog;
    myanimal.Sounds(); // default it runs the method Sounds
    mypig.Sounds();// it overrides the remaining Sounds
    mydog.Sounds();// it overrides the remaining Sounds

}