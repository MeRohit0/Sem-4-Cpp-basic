//program for the concept of container and inheritance 
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout << "You are in class A "<< endl;
    }
};
class B
{
    private:
    A obja;
    public:
    void display()
    {
        cout << "You are in class B"<<endl;
        obja.display();
    }
};
int main()
{
    B objb;
    objb.display();
}