#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    // const int x=10;   //constant variable cannot be alterd throughout the program .
    // int a=10;
    // int b=990;
    // int c=1000;
    // cout<<"The value of a is : "<<setw(4)<<a<<endl;
    // cout<<"The value of b is : "<<setw(4)<<b<<endl;
    // cout<<"The value of c is : "<<setw(4)<<c<<endl;

    int age =1;
    switch(age){
        case 1:{
            cout<<"You are 1 yrs old ."<<endl;
            break;
        }
        case 2:{
            cout<<"You are 2 yrs old ."<<endl;
            break;
        }
        default:{
            cout<<"You are neither 1 nor 2 yrs old ."<<endl;
            break;
        }
    }
    cout<<"Done with switch case .";
    return 0;
}