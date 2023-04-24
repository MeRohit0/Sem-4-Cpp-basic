//Program for the polymorphism 
#include<iostream>
using namespace std;
class A
{
    private:
    int m,n;
    public:
    A(int a,int b)                                                          // <---- Two Argument constructor
    {
        cout<<"Constructor calling when object created"<<endl;
        cout<<a+b<<endl;
    }
    A(int a)                                                                // <---- One Argument constructor
    {
        cout<<a*a<<endl;
    }
};
int main()
{

    A obj1 = A(132,12);                         // <-- Explicit 
    A obj2(15);                             // <-- Implicit
}   