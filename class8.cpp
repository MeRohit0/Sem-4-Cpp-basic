//Program to write the class in the function (local class )
#include<iostream>
using namespace std;
void example()
{
    class A
    {
        public:
        void display()
        {
            cout <<"You are in the class A display function";
        }
    };
    A obj;
    obj.display();

}
int main()
{
    example();
}