#include<iostream>
using namespace std;

int main(){
    int i, n;
    cout<<"enter the number :\n";
    cin>>n;

    if(n<2){
        cout<<"Not Prime!\n";
        return 0;
    }

    for(i=2; i<n; i++){
        if(n%2==0){
            cout<<"Not Prime!!\n";
            return 0;
        }
    }

    cout<<"Prime\n";



}