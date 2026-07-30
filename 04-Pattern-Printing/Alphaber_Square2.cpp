#include <iostream>
using namespace std;
int main()
{
        int n;
        cout<<"Enter n: ";
        cin>>n;
        for(char ch='A'; ch<=n+64; ch++){
            for(char c='A'; c<=n+64; c++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }

    return 0;
}
