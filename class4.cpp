//program to calling the class function
#include<iostream>
using namespace std;
class normal 
{
    public:
    int a=0;
    int getvalue()
    {
        a=a+1;
        return a;
    }
};
int main()
{
    normal n1 ,n2, n3 ;
    cout << n1.getvalue()<<endl;
    cout << n2.getvalue()<<endl;
    cout << n3.getvalue()<<endl;
}