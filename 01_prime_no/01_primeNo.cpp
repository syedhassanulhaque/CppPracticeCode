#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    int i=2;
    int flag=0;

    while (i<=sqrt(n))
    {
        if(n%i==0){
            cout<<" Not a Prime No"<<endl;
            flag=1;
            break;

        }
        i++;
    }

    if(flag==0){
        cout<<"prime No";
    }
    


}