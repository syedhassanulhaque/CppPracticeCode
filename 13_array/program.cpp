#include <iostream>
#include <conio.h>
#include <math.h>
#include<climits>

using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int maxNo=INT_MIN;
int minNo=INT_MAX;

    for ( int i = 0; i < n; i++)
    {
        if (maxNo<arr[i])   
        {
            maxNo=arr[i];
        }
         if (minNo>arr[i])   
        {
            minNo=arr[i];
        }
        
    }
    
cout<<maxNo;
cout<<minNo;

getch();
return 0;
}