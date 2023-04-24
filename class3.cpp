// program to call the member function in class
#include <iostream>
using namespace std;
class addition
{
public:
    int a, b;
    int add()
    {
        return a + b;
    }
};
class multiplication
{
public:
    int a, b;
    int mul()
    {
        return a * b;
    }
};
int main()
{
    addition obj1;
    multiplication obj2;
    cout << "Enter two number for addition" << endl;
    cin >> obj1.a >> obj1.b;
    cout << "Enter two number for multiplcation" << endl;
    cin >> obj2.a >> obj2.b;
    cout << "Addition : " << obj1.add() << endl;
    cout << "Multiplication : " << obj2.mul();
    return 0;
}
