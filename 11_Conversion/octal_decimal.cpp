#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int o2d(int octal){
    int decimal=0;
    int i=0;
    while (octal>0)
    {   int lastdigit;
        lastdigit=octal%10;
        decimal+=pow(8,i)*lastdigit;
    octal/=10;
    i++;
    }
    return decimal;
}
int main(){
    int octal;
cin>>octal;
cout<<o2d(octal);
getch();
return 0;
}