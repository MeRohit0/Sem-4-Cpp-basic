// Program for the template using in the class
#include <iostream>
using namespace std;
template <class T> // <--- this is generic class T
class example
{
    T a; // <-- declare data member with generic template datatype
    T b;

public:
    example(T x, T y) // <--- see argument here with template datatype
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
    example<int> obj1(1, 7); // <--- here we declare different datatype on template using (angle bracket)
    obj1.display();
    example<float> obj2(31.51, 12.6);
    obj2.display();
    return 0;
}
