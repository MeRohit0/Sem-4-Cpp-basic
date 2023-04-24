//Program for the oveloading operator operator+ 
#include<iostream>
using namespace std;
class complex
{
    private:
    int real ,imag;
    public:
    complex(int r = 0 , int i = 0){             // <----- its constructor 
        real = r;
        imag = i;
    }
    complex operator+( complex obj){             // <------ here is the operator+ its works as the function and takes input argument 
        complex num;
        num.real = real + obj.real;
        num.imag = imag + obj.imag;
        return num;                              // <------ and return num object    
    }
    void print(){
        cout << real << " + i" << imag << endl ;
    }
};
int main(){
    complex c1(10,4) ,c2(2,5);
    complex c3;
    c3 = c1 + c2 ;
    c3.print();
}