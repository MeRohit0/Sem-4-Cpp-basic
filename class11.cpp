//Program to call the parameterised constructor in the class 
#include<iostream>
using namespace std;
class A
{
    private:
    int m,n;
    public:
    A(int a,int b)
    {
        m=a;
        n=b;
        cout<<"Constructor calling when object created"<<endl;
        cout<<m<<endl<<n<<endl;
    }   
};
int main()
{
    A obj1 = A(132,12);                         // <-- Explicit 
    A obj2(164,32);                             // <-- Implicit
}