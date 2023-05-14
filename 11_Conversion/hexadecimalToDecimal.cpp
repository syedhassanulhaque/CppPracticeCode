#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
using namespace std;
int hexadecimalToDecimal(string n){
    int s=n.size();
    int x=1;
    int ans=0;
    for (int i = s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(10+(n[i]-'A'));
        }
        x*=16;
    }
    return ans;

}


int main(){
    string n;
    cout<<"Enter a Hexadecimal No:";
    cin>>n;
    cout<<"Decimal No:"<<hexadecimalToDecimal(n);

    getch();
return 0;
}