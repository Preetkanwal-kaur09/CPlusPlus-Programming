#include <iostream>
using namespace std;
int main()
{
    int n;
     cout<<"Enter nth term: ";
     cin>>n;
     int a = 0;
     int b = 1;
     int c = a+b;
     for(int i=1;i<=n;i++){
         cout<<a<<" ";
         a = b;
         b = c;
         c = a+b;
     }

    return 0;
}
