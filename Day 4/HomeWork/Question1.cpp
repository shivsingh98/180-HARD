// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.


#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout<<"Enter 1st number :\n";
    cin>>a;
    cout<<"Enter 2nd number :\n";
    cin>>b;

    if(a>b){
        cout<<a <<" is grater.";
    }else{
        cout<<b << " is grater.";
    }
}