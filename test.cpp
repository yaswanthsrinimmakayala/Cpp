#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void display(vector<int> x)
{
    vector<int>::iterator f=x.begin();
    while(f!=x.end())
    {
        cout<<*f<<" ";
        f++;
    } 
    cout<<endl;
}
int main()
{
    vector<int> t = {1,2,3,4,5,6,7,8};
    vector<int>::iterator itr;
    itr = t.begin();
    cout<<"Displaying the elements from front"<<endl;
    while(itr!=t.end())
    {
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;
    cout<<"Displaying the elements from last"<<endl;
    vector<int>::reverse_iterator itr1;
    itr1=t.rbegin();
    while(itr1!=t.rend())
    {
        cout<<*itr1<<" ";
        itr1++;
    }
    cout<<endl;
    vector<int>::const_iterator citr = t.cbegin();
    cout<<"Displaying the elements from front"<<endl;
    while(citr!=t.cend())
    {
        cout<<*citr<<" ";
        citr++;
    }
    cout<<endl;
    cout<<"Displaying the elements from end"<<endl;
    vector<int>::const_reverse_iterator citr1=t.crbegin();
    while(citr1!=t.crend())
    {
        cout<<*citr1<<" ";
        citr1++;
    }
    cout<<endl;
    cout<<"capacity"<<endl;
    cout<<"Size(): of t:";
    cout<<t.size()<<endl;

    cout<<"max_size(): of t:"<<t.max_size()<<endl;
    cout<<"capacity(): of t:"<<t.capacity()<<endl;
    cout<<"resize(5): t from 8 to 5"<<endl;
    t.resize(5);
    vector<int>::iterator iter = t.begin();
    while(iter!=t.end())
    {
        cout<<*iter<<" ";
        iter++;
    }
    cout<<endl;
    cout<<"Checking whether t is empty or not:  "<<((t.empty())?("Empty"):("Not Empty"))<<endl;
    cout<<"Reserve() in vectors"<<endl;
    vector<int> s;
    s.reserve(3);
    vector<int>::iterator it;
    for(int i = 1 ;i<=5;i++)
    {
        s.push_back(i*10);
    }
    cout<<"size of s:"<<s.size()<<endl;
    cout<<"capacity of s:"<<s.capacity()<<endl;

    cout<<"************Element Access*********************"<<endl;
    cout<<"Reference Operator to third element to vector t"<<endl;
    int &ref = t[2];
    cout<<&ref<<endl;
    cout<<ref<<endl;
    cout<<"at(4) in vector t:"<<t.at(4)<<endl;
    //cout<<"at(10) in vector t:"<<t.at(10)<<endl;
    // the above line will cause an exception called out of range
    cout<<"Accessing the first element in vector t:"<<t.front()<<endl;
    cout<<"Accessing the last element in vector t:"<<t.back()<<endl;
    cout<<"It will return the direct pointer to array which storing the vector t"<<t.data()<<endl;
    cout<<"this will return the first element in vector"<<*t.data()<<endl;

    cout<<"**********Modifiers**********"<<endl;
    cout<<"assign() in t: assigning values {10,20,30,40,50,60}"<<endl;
    cout<<"Before Assigning"<<endl;
    vector<int>::iterator iter_b ;
    iter_b = t.begin();
    while(iter_b!=t.end())
    {
        cout<<*iter_b<<" ";
        iter_b++;
    }
    cout<<endl;
    cout<<"After assigning:"<<endl;
    t.assign({10,20,30,40,50});
    vector<int>::iterator iter_a ;
    iter_a = t.begin();
    while(iter_a!=t.end())
    {
        cout<<*iter_a<<" ";
        iter_a++;
    }
    cout<<endl;
    cout<<"Assign: 1 "<<endl;
    vector<int> v = {0,1,2,4,5};
    vector<int> t1={10,20,30,40,50,60};
    vector<int>::iterator itr_re;
    itr_re = v.begin();
    v.assign(t1.begin(),t1.end());
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Assign:2"<<endl;
    vector<int> g(2); // created a vector g with size 2 with values as o , if i did't mentioned th size there will be no values
    vector<int>::iterator irt;
    irt = g.begin();
    cout<<"Before Assigning:"<<endl;
    while(irt!=g.end())
    {
        cout<<*irt<<" ";
        irt++;  
    }
    cout<<"After Assigning:"<<endl;
    g.assign(3,1207);
    vector<int>::iterator g2;
    g2=g.begin();
    while(g2!=g.end())
    {
        cout<<*g2<<" ";
        g2++;  
    }

    cout<<"push_back() "<<endl;
    vector<int> b = {1,2,3};
    vector<int>::iterator n = b.begin();
    cout<<"Before:Push_back()"<<endl;
    while(n!=b.end())
    {
        cout<<*n<<" ";n++;
    }
    cout<<endl;
    b.push_back(1207);
    vector<int>::iterator n1 = b.begin();
    cout<<"After:Push_back()"<<endl;
    while(n1!=b.end())
    {
        cout<<*n1<<" ";n1++;
    }
    cout<<endl;
    cout<<"pop_back() "<<endl;
    vector<int> k = {1,2,3};
    vector<int>::iterator n2 =k.begin();
    cout<<"Before:pop_back()"<<endl;
    while(n2!=k.end())
    {
        cout<<*n2<<" ";n2++;
    }
    cout<<endl;
    k.pop_back();
    vector<int>::iterator n3 = k.begin();
    cout<<"After:pop_back()"<<endl;
    while(n3!=k.end())
    {
        cout<<*n3<<" ";n3++;
    }
    cout<<endl;
    cout<<"INSERT:"<<endl;
    vector<int> m = {1,3,4,5,6};
    display(m);
    m.insert(m.begin()+1,2);//inserts 2 in index of m.begin()+1;
    display(m);
    m.insert(m.end(),7,3);//inserts 7 3's at the end();
    display(m);
    vector<int> l = {7,8,9,10};
    m.insert(m.begin()+5,l.begin(),l.end());
    display(m);
    cout<<"Erase"<<endl;
    m.erase(m.begin());
    display(m);
    m.erase(m.begin()+5,m.begin()+7);
    display(m);
    cout<<"Swap"<<endl;
    vector<int> a ={1,2,3};
    vector<int> q ={4,5,6,7};
    cout<<"Before swapping"<<endl;
    cout<<"a is:";display(a);
    cout<<"b is:";display(q);
    a.swap(q);
    cout<<"After swapping"<<endl;
    cout<<"a is:";display(a);
    cout<<"b is:";display(q);
    cout<<"Clear"<<endl;
    cout<<"Before Clearing"<<endl;
    display(q);
    q.clear();
    cout<<"After Clearing"<<endl;
    display(q);
    cout<<"Emplace"<<endl;
    q.emplace(q.begin(),1207);
    cout<<"After Emplace"<<endl;
    display(q);
    cout<<"Emplace_back"<<endl;
    q.emplace_back(8061);
    display(q);
    std::vector<int> numbers;

    // Adding elements to the vector
    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);
    }

    std::cout << "Size before shrink: " << numbers.size() << std::endl;
    std::cout << "Capacity before shrink: " << numbers.capacity() << std::endl;

    // Reducing capacity to match size
    numbers.shrink_to_fit();

    std::cout << "Size after shrink: " << numbers.size() << std::endl;
    std::cout << "Capacity after shrink: " << numbers.capacity() << std::endl;

    return 0;







    
    return 0;
}