#include <iostream>

using namespace std;
int naturalSum(int n){
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }

    return sum;
    
}
int main(){
    int n;
    cin>>n;
    cout<<naturalSum(n);
return 0;
}