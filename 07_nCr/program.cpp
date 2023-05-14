#include <iostream>

using namespace std;
int factorial(int n){
    if (n==0){
        return 1;
    }
    
    int fact=1;
    for (int i = 1; i < n+1; i++)
    {
        fact*=i;
    }

    return fact;
    
}


int main(){
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)/(factorial(n-r)*factorial(r));
return 0;
}