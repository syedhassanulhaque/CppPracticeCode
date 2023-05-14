#include <iostream>

using namespace std;
void fib(int n){
    int t1=0,t2=1,t3;
    cout<<t1<<t2;
    for (int i = 0; i < n-2; i++)
    {   t3=t1+t2;
        cout<<t3;
        t1=t2;
        t2=t3;

    }
    
}


int main(){
    int n;
cout<<"Enter no of terms:";
cin>>n;
fib(n);
return 0;
}