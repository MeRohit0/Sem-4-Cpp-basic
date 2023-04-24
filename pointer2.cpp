// Program for the arithmetic , increment and decrement operator
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    cout << *ptr + a << endl;
    cout << *ptr << endl;
    // *ptr = (*ptr)++;
    cout << (*ptr)++ << endl;
    cout << *ptr << endl;
}