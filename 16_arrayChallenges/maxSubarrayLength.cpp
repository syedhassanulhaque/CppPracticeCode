#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
 int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int pd=arr[0]-arr[1];
    int j=2;
    int curr=2;
    int ans=2;
    for ( j ; j < n; j++)
    {
        if (pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        if(ans<curr){
            ans=curr;
        }
    }
    cout<<ans<<endl;

getch();
return 0;
}