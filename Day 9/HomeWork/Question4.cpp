/*
Fourth Pattern:

      A B C D
      A B C
      A B
      A

*/

#include<iostream>
using namespace std;

int main(){
    char i,j;
    for(i='D'; i>='A';i--){
        for(j='A'; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}