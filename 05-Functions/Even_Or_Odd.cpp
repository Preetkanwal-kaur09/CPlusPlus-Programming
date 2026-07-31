#include <iostream>
using namespace std;
void EvenOdd(int n){
    if(n%2 == 0) cout<<"Even Number";
    else cout<<"Odd Number";
}
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    EvenOdd(n);
     
    return 0;
}
