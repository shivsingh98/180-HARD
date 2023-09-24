// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.


#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter your month in number :\n";
    cin>>m;
    if(m == 1)
    cout<<"January\n";
    else if(m == 2)
    cout<<"Feburary\n";
    else if(m == 3)
    cout<<"March\n";
    else if(m == 4)
    cout<<"April\n";
    else if(m == 5)
    cout<<"May\n";
    else if(m == 6)
    cout<<"June\n";
    else if(m == 7)
    cout<<"July\n";
    else if(m == 8)
    cout<<"August\n";
    else if(m == 9)
    cout<<"September\n";
    else if(m == 10)
    cout<<"October\n";
    else if(m == 11)
    cout<<"November\n";
    else if(m == 12)
    cout<<"December\n";
    else
    cout<<"Enter rigth number!!\n";
    
    return 0;
}