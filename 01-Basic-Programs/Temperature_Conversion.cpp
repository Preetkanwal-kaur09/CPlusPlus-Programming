#include <iostream>
using namespace std;
int main(){
    int choice;
    float C,F;
    cout<<"Celsius to Fahrenheit -> Enter 1"<<endl;
    cout<<"Fahrenheit to Celsius -> Enter 2"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    
    if(choice == 1){
        
        cout<<"Enter Celsius: ";
        cin>>C;
        F = (9.0/5) * C + 32;
        cout<<"Fahrenheit = "<<F;
        
    }
    else if(choice == 2){
        
        cout<<"Enter Fahrenheit: ";
        cin>>F;
        C = (5.0/9) * (F-32);
        cout<<"Celsius = "<<C;
        
    }
    else cout<<"Invalid choice";
    
    
}
