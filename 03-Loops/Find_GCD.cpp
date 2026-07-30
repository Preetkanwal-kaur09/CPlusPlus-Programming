#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    
    int GCD = 1;
    
    int small;
    if(a < b) small = a;
    else small = b;
    
    for(int i=1; i<=small; i++){
        if(a%i == 0 && b%i == 0){
              GCD = i;
        }
    }
    cout<<"GCD is: "<<GCD;

    return 0;
}
