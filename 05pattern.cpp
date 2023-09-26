/*
First Pattern:
       
     1
     2 1
     3 2 1
     4 3 2 1
     5 4 3 2 1 
     6 5 4 3 2 1
     7 6 5 4 3 2 1

*/
#include<iostream>
using namespace std;

int main(){
    char i,j;
    for(i='a'; i<='e';i++){
        for(j='a'; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}