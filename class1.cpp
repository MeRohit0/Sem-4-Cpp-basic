//program for accessing class member and member function 
#include <iostream>
using namespace std;
class addition
{
    public:
    int a,b;
    int add()
    {
        return a+b;
    }
};
class multiplication
{
    public:
    int a,b;
    int mul()
    {
        return a*b;
    }
};
int main()
{
    addition obj1;
    multiplication obj2;
    obj1.a = 5;
    obj1.b = 3;
    obj2.a=2;
    obj2.b=8;

	cout << obj1.add()<<endl;
    cout<< obj2.mul();
	return 0;
}
