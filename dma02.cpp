// dyanamic memory allocation using pointers
#include <iostream>
using namespace std;
class Example
{
private:
    int a, b;

public:
    void get_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << a << "\t" << b << endl;
    }
};
int main()
{
    cout << "Let start\n";
    Example *ptr;
    Example obj;
    ptr = &obj;
    ptr->get_data(4, 5);
    ptr->show_data();
    cout << "Now direct change the data \n";
    obj.get_data(63, 92);
    obj.show_data();
    return 0;
}