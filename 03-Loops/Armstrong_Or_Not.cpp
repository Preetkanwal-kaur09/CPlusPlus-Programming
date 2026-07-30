#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    cout<<"Enter a number: ";
    cin>>n;
    long long temp = n;
  
    //count the digits
    int count = 0;
    while( temp != 0){  
        temp /= 10;
        count++;
    }
    
    //power of each digits
    temp = n;
    int lastDigit;
    int sum = 0;
    while(temp != 0){      
        lastDigit = temp % 10;
        sum += pow(lastDigit,count);
        temp /= 10;
    }
    if(sum == n) cout<<"Armstrong Number";
    else cout<<"Not an Armstrong Number";
  
    return 0;
}
