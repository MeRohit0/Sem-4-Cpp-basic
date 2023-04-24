// program for the pointer and pointer of pointer
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr; // <---Pointer--->
    ptr = &a;
    int **ptr1;  // < --- we can declare here its value like in *comment in line 10 * and it will not give error
    ptr1 = &ptr; // <--- Here if we declare the with **ptr1 = &ptr its give error so we use ptr1=&ptr     // pointer of pointer //

    cout << "value of a                 :   " << a << '\n';
    cout << "Value of *ptr              :   " << *ptr << endl;
    cout << "value of &a                :   " << &a << endl;
    cout << "value of ptr               :   " << ptr << endl;
    cout << "value of &ptr              :   " << &ptr << endl;
    cout << "value of **ptr1            :   " << **ptr1 << endl;
}