/*
Second Pattern:
   
    A
    A B
    A B C
    A B C D
    A B C D E

*/

#include<iostream>
using namespace std;

int main(){
    char i,j;
    for(i='A'; i<='E';i++){
        for(j='A'; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}