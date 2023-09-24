// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number :\n";
    cin>>n;
    for(int i=4; i<=n; i=i+2){
        if(i%4 == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}