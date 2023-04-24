//program to call the class public function in main
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void display()
    {
        cout <<"You are in the class A and you call the function "<<endl;
    }
};
int main()
{   
    A member1;
    cout << "You are in the main "<<endl;
    member1.display();
    cout << "You are in the main after the class function"<<endl;
}