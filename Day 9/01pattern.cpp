/*
First Pattern:
       
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5 
     1 2 3 4 5 6 
     1 2 3 4 5 6
*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<=7;i++){
        for(j=1; j<=i; j++){
            if(i==7 && j==7)
            continue;
            cout<<j<<" ";
        }
        cout<<endl;
    }

}