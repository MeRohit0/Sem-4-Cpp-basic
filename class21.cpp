//program for the working of try and catch block on class i.e user defined 
#include<iostream>
using namespace std;
class demo
{
    public:
    demo(){
        cout <<"This is the demo class "<<endl;
    }
};
int main()
{
    int a;
    cout << "Enter the value of a"<<endl;
    cin >> a ;
    try
    {
        if(a==0){
            throw demo();
        }
        else {
            cout <<"The value of a is :"<< a ;
        }
    }
    catch(demo &d1){
        cout << "user function";
    }
return 0;
}