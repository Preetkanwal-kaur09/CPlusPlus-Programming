#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before Swapping, the value of a and b: "<<a<<" "<<b<<endl;
    int c;
    c = a;
    a = b;
    b = c;
    cout<<"After Swapping, the value of a and b: "<<a<<" "<<b;
    

    return 0;
}
