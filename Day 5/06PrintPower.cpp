#include<iostream>
using namespace std;

int main(){
    int n, pow, i;
    int res = 1;
    cout<<"enter the number and power :";
    cin>>n>>pow;
    for(int i=1; i<=pow; i++){
        res = res * n;
    }
    cout<<n<<" to the power "<<pow<<" = "<< res<<endl;

}