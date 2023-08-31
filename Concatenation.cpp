#include<iostream>
#include<string>
using namespace std;
int main()
{
    string mystring= "Yaswanth";
    string string2 = "Sri";
    cout<<mystring+string2<<endl;
    string str3;
    str3 = mystring.append(string2);
    cout<<str3<<endl;
    cout<<str3.length()<<endl;
    cout<<str3.size()<<endl;
    return 0;

}