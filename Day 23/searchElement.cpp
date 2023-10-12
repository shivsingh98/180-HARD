#include<iostream>
using namespace std;

int searchEle(int arr[], int size, int x){
    int index = -1;

    for(int i=0; i<size; i++){
        if(arr[i] == x){
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    int arr[] = {10, 20, 7, 11, 8, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int k = 11;
    int ind = searchEle(arr, arr_size, k);
    cout<<"index of "<<k<<" is "<<ind;
    return 0;
}