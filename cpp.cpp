#include<iostream>
using namespace std;
int countone(int x)
{
    int countOne=0;
    int g;
    while(x!=0)
    {
        g = x%2;
        if(g==1)
        {
            countOne++;
        }
        x=x/2;
    }
    return countOne;
}
void swapping(int arr[],int arrCount[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1 ;j<n;j++)
        {
            if(arrCount[i]>arrCount[j])
            {
                swap(arr[i],arr[j]);
                swap(arrCount[i],arrCount[j]);
            }
            else if(arrCount[i]==arrCount[j])
            {
                if(arr[i]>arr[j])
                {
                    swap(arr[i],arr[j]);
                    swap(arrCount[i],arrCount[j]);

                }
            }
        }
    }

}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        arr[i] = z;
    }
    int arrCount[n];
    for(int i = 0;i<n;i++)
    {
        arrCount[i]=countone(arr[i]);
    }
    swapping(arr,arrCount,n);
    for(int x =0;x<n;x++)
    {
        cout<<arr[x]<<endl;
    }
    return 0;
}