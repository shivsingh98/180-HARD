#include<iostream>
using namespace std;

int main() {
    int n, i;

    cout<<"enter the number :\n";
    cin>>n;

    int sum = 0;

    for(i=1; i<=n; i++){
        sum += i;
    }
    cout<<sum<<endl;

    int res = (n*(n+1))/2;
    cout<<res;

}