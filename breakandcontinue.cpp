#include<iostream>
using namespace std;
int main()
{
    cout<<"Break in for loop"<<endl;
    for(int i = 0 ; i<10;i++)
    {
        if(i==4)
        {
            break;
        }
        cout<<i<<endl;
    }
    cout<<"Continue in for loop"<<endl;
    for(int j = 0 ;j<10;j++)
    {
        if(j==4)
        {
            continue;
        }
        cout<<j<<endl;
    }
    cout<<"Break in while loop "<<endl;
    int k = 1;
    while(k<=10)
    {
        if(k==4){
            break;
        }
        cout<<k<<endl;
        k++;
    }
    cout<<"Continue in while loop"<<endl;
    int h=1;
    while(h<=10)
    {
        if(h==4)
        {
            h++;
            continue;
        }
        cout<<h<<endl;
        h++;
    }

}