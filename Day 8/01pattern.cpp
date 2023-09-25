#include<iostream>
using namespace std;

int main(){
    int row, col;

    // for(row=1; row<=6; row++){
    //     char c = 'a' + (row-1);
    //     for(col=1; col<=5; col++){
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(row=1; row<=4; row++){
    //     for(col=1; col<=5; col++){
    //     char c = 'a' + (col-1);
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    int count = 1;
    for(row=1; row<=5; row++){
        
        // for(col=1; col<=5; col++){
        //     cout<<count<<" ";
        //     count++;
        // }
        // cout<<endl;

        for(col=1; col<=5; col++){
            cout<<(row-1)*5+1<<" ";
            count++;
        }
        cout<<endl;
        
    }
}