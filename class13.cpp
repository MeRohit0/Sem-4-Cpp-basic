//program for the overriding 
#include<iostream>
using namespace std;
class A
{
    public:
    void display()                                                          
    {
        cout<<" This is class A function "<<endl;
    }
};
class B : public A 
{
    public:
    void display()                                                         
    {
        cout<<"This is class B function" <<endl;
    }
};
int main()
{
    B obj ;
    obj.B::display();                           // <---- Overriding method for class B 
    obj.A::display();                           // <---- Overriding method for class A
    return 0;
}   
