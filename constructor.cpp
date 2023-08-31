//constructor are just like methods 
//the difference is that constructor will be called automatically after the object
//where as method need to called manually 
#include<iostream>
#include<string>
using namespace std;
class food
{
    public:
    string ordername;
    int num;
    string item;
    food(string x,int y,string z)
    {
        ordername=x;
        num=y;
        item=z;
    }
    void print(){
        cout<<ordername<<endl;
        cout<<num<<endl;
        cout<<item<<endl;
    }
};
int main()
{
    food ord1("Rahul",1,"biryani");//ord1 is object it calls the constructer food
    food ord2("Yaswanth",2,"cake");
    ord1.print();
    ord2.print();
}
// constructor has same name as the class
// constructor can be created outside the class just like the methods