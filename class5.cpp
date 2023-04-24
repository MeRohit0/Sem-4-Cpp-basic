/* program to call static member in class 
here we should note that if the static variable is call then then both normal function and static funtion can use the class member 
but in case of static function then only static variable is access by the static funtion    */

#include<iostream>
using namespace std;
class normal 
{
    public:
    static int a;
    static int getvalue()              // <-- i am talkin about this if we remove this static 
    {
        a=a+1;
        return a;
    }
};
int normal :: a=0;
int main()
{
    normal n1 ,n2, n3 ;
    cout << n1.getvalue()<<endl;
    cout << n2.getvalue()<<endl;
    cout << n3.getvalue()<<endl;
    return 0;
}