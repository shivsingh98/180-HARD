/*
First Pattern:
       
     * * * * *
     * * * *
     * * *
     * * 
     * 
     // row-i+1

*/
#include<iostream>
using namespace std;

int main(){
    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=(5-i+1); j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=(5-i+1); j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    int i,j;
    for(i=1; i<=5; i++){
        for(j=5; j>=5-(i-1); j--){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
   

}