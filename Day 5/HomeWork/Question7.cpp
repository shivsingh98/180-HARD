
// Print n’th Fibonacci number.


#include<iostream>
using namespace std;

int main(){
    int last=0, pre=1, curr, n;
    cout<<"enter the number :\n";
    cin>>n;
    // cout<<last<<" "<<pre<<" ";
    for(int i=3; i<=n; i++){
        curr = last + pre;
        // cout<<curr<<" ";
        last = pre;
        pre = curr;   
    }
    cout<<curr<<endl;
}