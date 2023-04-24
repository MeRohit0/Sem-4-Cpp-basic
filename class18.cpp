// program for the try ,throw and catch block  
#include<iostream>
using namespace std ;
int main(){
    int a,b,c;
    cout << "Enter the value of a , b : " << endl;
    cin >> a >> b;
    try{                                                               // <---- we use enter the suspencted code which can give error 
        if(b!=0){
            c = a/b;
            cout << c << endl;
        }
        else{
            throw(b);                                                   // <---- here we throw the value of b to catch throw(type)
        }
    }
    catch(int b) {                                                      // <---- We have to give the int datatype argument 
        cout << "Zero divisible is not possible"<< endl;
    }

    cout << "Here is 1000 line of code which will execute ";

    return 0;
}