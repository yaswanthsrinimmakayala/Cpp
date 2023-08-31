// constructor can be created outside the class just like the methods
#include<iostream>
#include<string>
using namespace std;
class ord
{
public:
    int num;
    string item;
    ord(int x,string y);
    void method();
   
};
ord::ord(int x,string y)
{
    num = x;
    item = y;
}
void ord::method()
{
    cout<<num<<" "<<item<<endl;
}
int main()
{
    ord ords1(1,"car");
    ord ords2(2,"pen");
    ords1.method();
    ords2.method();
    cout<<ords1.item<<endl;
    cout<<ords2.item<<endl;
}