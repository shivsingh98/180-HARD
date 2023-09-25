// Print Sum of square of first n natural number.

#include<iostream>
using namespace std;

int main(){

    int n, i, sum = 0;
    cout<<"enter the number :\n";
    cin>>n;
    for(i=1; i<=n; i++){
        sum += i*i;
    }
        cout<<sum<<endl;

        int res = (n*(n+1)*(2*n+1))/6;
        cout<<res<<endl;
}