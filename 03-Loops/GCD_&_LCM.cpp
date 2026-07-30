#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    
    int gcd =1;
    
    int small;
    if(a < b) small = a;
    else small = b;
    
    for(int i=1; i<=small; i++){
        if(a%i == 0 && b%i == 0){   
            gcd = i;
        }
    }
    int lcm = (a * b) / gcd;
    cout<<"GCD is: "<<gcd<<endl;
    cout<<"LCM is: "<<lcm;

    return 0;
}
