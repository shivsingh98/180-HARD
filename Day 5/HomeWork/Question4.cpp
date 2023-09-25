// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.


#include<iostream>
using namespace std;

int main(){
int a=220, n=730, d=3;
    for(int i=a; i<=n; i=i+3){
        cout<<i<<" ";
    }
}