//this is program for the multiple catch block (example 2) 
#include<iostream>
using namespace std;
int main(){
    int a;
    float b;
    cout << "Enter the value of a "<<endl;
    cin >> a ;
    cout << "Enter the value of b "<<endl;
    cin >> b ;
    try{
        if(a==0){
            throw(a);
        }
        else{
            cout << a<<endl;
        }
        if(b==0.0){
            throw(b);
        }
        else{
            cout <<b<<endl;
        }
    }
    catch(int e){
        cout << "Exception of int type "<<endl;
    }
    catch(float c){
        cout << "Exception of float type "<<endl;
    }

}