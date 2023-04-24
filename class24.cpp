// program for the template using different datatype <type1 ,type2 >
#include <iostream>
using namespace std;
template <class T, class T1> // <--- this is generic class T and T1
class example
{
    T a; // <-- declare data member with generic template datatype <T , T1 >
    T1 b;

public:
    example(T x, T1 y) // <--- see argument here with template datatype < T , T1 >
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "\t" << b << endl;
    }
};
int main()
{
    example<int, float> obj1(1, 7.231); // <--- here we declare different datatype on template using < data type1 ,data  type2  >
    obj1.display();
    example<float, int> obj2(51.51, 91);
    obj2.display();
    return 0;
}
