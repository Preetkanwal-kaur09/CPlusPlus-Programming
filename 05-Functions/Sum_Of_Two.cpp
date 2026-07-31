#include <iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
int main()
{
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    cout<<sum(a,b);
    
    return 0;
}
