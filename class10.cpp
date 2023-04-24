//Program to call the default constructor in the class 
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Constructor calling when object created";
    }
};
int main()
{
    A obj1;
}