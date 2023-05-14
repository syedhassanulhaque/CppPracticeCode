#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int selectionSort(int arr[],int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])    
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    
    
    
}

int main(){
     int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    selectionSort(arr,n);

getch();
return 0;
}