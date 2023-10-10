#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[] = {3, 7, 9, 1, 6};

    int ans = INT_MAX;
    int sum = 0;

    for(int i=0; i<5; i++){
        sum += arr[i];
        if(arr[i] < ans){
            ans = arr[i];
        }
    }

    cout<<ans<<"\n";
    cout<<sum<<"\n";

    return 0;
}