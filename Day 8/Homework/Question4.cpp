/*
Fourth Pattern:

F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K

*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
   
    for(i=1; i<=5; i++){
        for(j=70; j<=75; j++){
            char c = j;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}