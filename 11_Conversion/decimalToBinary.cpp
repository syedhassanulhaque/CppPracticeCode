#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int decimalToBinary(int n){
    int i=0;
    int binary=0;
    while (n>0) 
    {
        int digit;
        digit=n%2;
        binary+=(digit*pow(10,i));
        n/=2;
        i++;
    }
    
    return binary;
}

int main(){
    cout<<"Enter a Decimal No:";
    int n;
    cin>>n;
    cout<<decimalToBinary(n);
getch();
return 0;
}