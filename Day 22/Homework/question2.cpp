// 2: Calculate the average of elements in an array of size 18.

#include<iostream>
using namespace std;

int main(){
    int arr[18];
    int sum = 0;
    for(int i=0; i<18; i++){
        cin>>arr[i];
    }

    for(int i=0; i<18; i++){
        sum = sum + arr[i];
    }

    cout<<"Average of 18 elements : "<<sum/18<<endl;



    return 0;
}