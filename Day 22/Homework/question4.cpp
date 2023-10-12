// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

#include<iostream>
using namespace std;

int main(){
    char arr[26];
    int ind = 0;

    for(int i=97; i<=122; i++){
        arr[ind] = (char)i;
        ind++;
    }

    // cout<<arr[0];
    for(int i=0; i<26; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}