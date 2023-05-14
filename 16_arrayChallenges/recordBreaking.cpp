#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
int n;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

int mx=0;
int res=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1] && arr[i]> mx){
            res++;
        }
        if(mx<arr[i]){
            mx=arr[i];
        }
        

    }
    cout<<res;
    
// getch();
return 0;
}