// program for the
#include <iostream>
using namespace std;
class addition
{
private:
    int a, b;

public:
    int add(int i, int j)
    {
        a = i;
        b = j;
        return a + b;
    }
};
class multipication
{
private:
    int a, b;

public:
    int mul(int i, int j)
    {
        a = i;
        b = j;
        return a * b;
    }
};
class subtraction
{
private:
    int a, b;

public:
    int sub(int i, int j)
    {
        a = i;
        b = j;
        return a - b;
    }
};
class divide
{
private:
    int a, b;

public:
    int div(int i, int j)
    {
        a = i;
        b = j;
        return a / b;
    }
};
class remainder
{
private:
    int a, b;

public:
    int rem(int i, int j)
    {
        a = i;
        b = j;
        return a % b;
    }
};
int main()
{
    addition obj1;
    multipication obj2;
    divide obj3;
    subtraction obj4;
    remainder obj5;

    cout << "Addition of a and b is :" << obj1.add(8, 3) << endl;
    cout << "Subtraction of a and b is :" << obj4.sub(8, 3) << endl;
    cout << "Multiply of a and b is :" << obj2.mul(2, 5) << endl;
    cout << "Divide of a and b is :" << obj3.div(12, 3) << endl;
    cout << "Remainder of a and b is :" << obj5.rem(82, 3) << endl;
}
