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

    int mx=-99999;
    for (int i = 0; i < n; i++)
    {
        if(mx<arr[i]){
            mx=arr[i];
           
        }
         cout<<mx<<endl;
    }
    

getch();
return 0;
}