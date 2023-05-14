#include <iostream>
#include<math.h>
using namespace std;
void isPtriplet(int p, int b, int h){
    if (pow(h,2)==(pow(p,2)+pow(b,2))){
        cout<<"Pythogorian triplet";
    }
    else{
         cout<<"Not a Pythogorian triplet";
    }
    
}

int main(){
    int p, b,h;
    cin>>p>>b>>h;
    isPtriplet(p,b,h);

return 0;
}