// Using template for creating generic function for data type different but
// Ques--- write a templete function for two number swapping
#include <iostream>
using namespace std;
template <class T>
void display(T a, T b)
{
    cout << a << "\t" << b << endl;
}
int main()
{
    display(6, 3);             // <-- int datathype
    display(6.5, 2.234);       // <-- float datatype
    display("rohit", "hello"); // <-- string datatype
}
