#include<iostream>
using namespace std;
int main()
{
    int myNumbers[5]={1,2,3,4,5};
    for(int i : myNumbers)
    {
        cout<<i-1<<endl;
    }

}