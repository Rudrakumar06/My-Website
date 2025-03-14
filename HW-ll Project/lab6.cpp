#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class family;
class person
{
    int age;
    string name;
    
    public:
    person(string name,int age)
    {
        this -> name = name;
        this -> age = age; 
    }
    void print()
    {
        cout<<age<<" "<<name<<endl;
    }
    friend class family;
};
class family
{
    static int members_count;
    person p[20];
    
    public:
    family(int members_count=0)
    {
        this -> members_count = 0;;
    }
    void add_member(string name,int age)
    {   
        p[members_count].name=name;
        p[members_count].age=age;
        members_count++;
    }
    void print()
    {
        for(int i=0;i<20;i++)
        {
            cout<<p[i].print();
        }
    }
};
int main() {
    int n;
    cin>>n;
    family f1(n);
    string name;
    int age;
    for(int i=0;i<n;i++)
    {
        cin>>name>>age;
        f1.add_member(name,age);
    }
    f1.print();
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
