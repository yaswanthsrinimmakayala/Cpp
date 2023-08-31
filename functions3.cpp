// Default parameter
#include<iostream>
using namespace std;
void myfunction(string country="Norway")
{
    cout<<country<<endl;
}
// we are using void because it doesn't return a value
int main()
{
    myfunction();
    myfunction("India");
    myfunction("America");
    // when you didn't give the parameter it will use the default parameter
}