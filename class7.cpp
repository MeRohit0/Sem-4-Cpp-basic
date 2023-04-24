// Program to call the class within class 
#include<iostream>
using namespace std;
class A
{
    public:
    class B
    {
        public:
        void display()
        {
            cout <<"You are in the deep in the class "<<endl;
        }
    };
};
int main()
{   
    A :: B member1;
    cout << "You are in the main "<<endl;
    member1.display();
    cout << "You are in the main after the class function"<<endl;
}