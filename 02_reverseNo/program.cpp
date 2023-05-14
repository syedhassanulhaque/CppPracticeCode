#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int revNo=0;
    while (n>0)
    {
        int lastdigit;
        lastdigit=n%10;
        revNo=revNo*10+lastdigit;
        n/=10;

    }
    
    cout<<"reverse no:"<<revNo;
    
    
    

}