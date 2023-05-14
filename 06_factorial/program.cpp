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
    int n;
    cin>>n;
    cout<<factorial(n);
return 0;
}