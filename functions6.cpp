#include<iostream>
using namespace std;
void print(int mynumbers[5])
{
    for(int i =0;i<5;i++)
    {
        cout<<mynumbers[i]<<endl;
    }
}
int main()
{
    int mynumbers[5]={1,2,3,4,5};
    print(mynumbers);
}