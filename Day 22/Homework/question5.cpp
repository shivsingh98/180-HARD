// 5: Find the second largest element in an array of unique elements of size n. Where n>3.

#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[] = {50, 6, 8, 9, 12, 16};
    int max = INT_MIN;
    int secondMax = INT_MIN;
    int len = sizeof(arr)/sizeof(arr[0]);

    if (len < 2) { 
        printf(" Invalid Input "); 
        return; 
    }
    for(int i=0; i<len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i]> secondMax && arr[i] < max){
                secondMax = arr[i];
            }
    }
    cout<<"Max element : "<<max<<endl;
    cout<<"secondMax element : "<<secondMax;

    return 0;
}