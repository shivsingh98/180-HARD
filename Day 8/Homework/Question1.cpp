/*First Pattern:

       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4  
       4 4 4 4 4 4
       4 4 4 4 4 4 
*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
   
    for(i=1; i<=5; i++){
        for(j=1; j<=6; j++){
            cout<<"4 ";
        }
        cout<<endl;
    }
}