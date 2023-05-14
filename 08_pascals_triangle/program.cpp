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

int nCr(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}


int main(){
    int row;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    
return 0;
}