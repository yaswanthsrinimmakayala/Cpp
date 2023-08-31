#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template<typename T>
T myMax(T x,T y)
{
    return (x>y)?x:y;
}
int main()
{
    cout<<myMax<int>(7,3)<<endl;
    cout<<myMax<char>('g','c')<<endl;
    return 0;
}
// it resolves the problem of creating two funtions for int and char datatypes
// in place of x and y we can pass an y datatypes 
//   