#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    int lastDigit;
    while(n != 0){  
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n /= 10;   
    }
    cout<<sum;


    return 0;
}
