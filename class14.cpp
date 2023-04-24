//Program for the order of execution 
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"You have call the class A"<<endl;
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"You have call the class B"<<endl;
    }
};
class C : public B
{
    public:
    C()
    {
        cout<<"You have call the class C"<<endl;
    }

};
class D : public C
{
    public:    
    D()
    {
        cout<<"You have call the class D"<<endl;
    }
};
int main()
{
    D obj;                                  //  <----------- here i have just call the object and the constructor is calling itself 
    return 0;
}