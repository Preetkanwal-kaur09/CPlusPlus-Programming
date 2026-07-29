#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;
    int rev = 0;
    int lastDigit;
    while(n != 0){
        
        lastDigit = n%10;
        rev *= 10;
        rev += lastDigit;
        n /= 10;
    }
    if(temp == rev) cout<<"Palindrome Number";
    else cout<<"Not a Palindrome Number";

    return 0;
}
