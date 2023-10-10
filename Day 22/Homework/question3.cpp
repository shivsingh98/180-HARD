// 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"enter size of array\n";
    cin>>size;

    int arr[size];
    cout<<"enter "<<size<<" element : \n";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"enter the element which index you want to find :\n";
    cin>>k;
    int index = -1;

    for(int i=0; i<6; i++){
        if(arr[i] == k){
            index = i;
            break;
        }
    }

    cout<<"index of "<<k<<" is : "<<index<<"\n";

    return 0;
}