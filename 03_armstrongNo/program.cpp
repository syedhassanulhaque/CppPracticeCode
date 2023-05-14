#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    int temp=n;

    int armNo=0;

    while (n>0)
    {
        int digit=n%10;
        n/=10;
        // cout<<digit <<"  "<<armNo <<endl;
        armNo=armNo+pow(digit,3);
        // cout<<digit <<"  "<<armNo <<endl;
        
    }

    // cout<<armNo;

    if(temp==armNo){
        cout<<"Armstrong No";

    }

    else{
        cout<<"Not an Armstrong no";
    }
    
    return 0;
}