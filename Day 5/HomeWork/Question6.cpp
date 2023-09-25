// Print Sum of cube of first n natural number.

#include<iostream>
using namespace std;

int main(){

    int n, i, sum = 0;
    cout<<"enter the number :\n";
    cin>>n;
    for(i=1; i<=n; i++){
        sum += i*i*i;
    }
        cout<<sum<<endl;

        int res = ((n*n)*(n+1)*(n+1))/4;
        cout<<res<<endl;
}