#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int b2d(int binary){
    int decimal=0;
    int i=0;
    while (binary>0)
    {   int lastdigit;
        lastdigit=binary%10;
        decimal+=pow(2,i)*lastdigit;
    binary/=10;
    i++;
    }
    return decimal;
}
int main(){
    int binary;
cin>>binary;
cout<<b2d(binary);
getch();
return 0;
}