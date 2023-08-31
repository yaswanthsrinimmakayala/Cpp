#include<iostream>
#include<string>
using namespace std;
struct 
{
    int model_no;
    string brand;
}car1;
struct 
{
    int model_no;
    string brand_name;
}car2,car3,car4;
struct car 
{
    int model_number;
    string brand_name;
};
int main()
{
    car1.model_no = 123;
    car1.brand="volvo";
    cout<<car1.model_no<<car1.brand<<endl;
    car2.model_no=145;
    car3.brand_name="Audi";
    cout<<car2.model_no<<car3.brand_name<<endl;
    car mycar;
    mycar.brand_name="Yaswanth";
    mycar.model_number=05;
    cout<<mycar<<

}