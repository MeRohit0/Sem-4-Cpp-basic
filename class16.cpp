//Type conversion from basic(int) to class 
#include<iostream>
using namespace std;
class A {
    private :
    int a ;
    public:
    A(int x){
        a=x;
    }
    void display(){
        cout <<a<<endl;
    }
};
int main(){
    A obj1=100;                       //<------ This is call at the beginning as we declare the object(variable) its call construcor 
    //obj1=100;
    obj1.display();
}