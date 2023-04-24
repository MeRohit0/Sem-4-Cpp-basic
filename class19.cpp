//this is program for the multiple catch block ( example 1 )
#include<iostream>
using namespace std ;
int main(){
    int a;
    int b;
    float c;
    char x;
    cout << "Enter the value of a , b : " << endl;
    cin >> a >> b;
    try{                                                               // <---- we use enter the suspencted code which can give error 
        if(b!=0){
            c = a/b;
            cout << c << endl;
        }
        else{
            throw(x);                                                   // <---- change your value here like a ,b, x 
        }
    }
    catch(int b) {                                                      // <---- We have to give the int datatype argument 
        cout << "Zero divisible is not possible"<< endl;
    }
    catch(float c){
        cout << "This is float value and now its enter in float catch " <<endl; 
    }
    catch(char x){
        cout << "This is char value and now its enter in char catch block " <<endl; 
    }
    cout << "Here is 1000 line of code which will execute ";

    return 0;
}