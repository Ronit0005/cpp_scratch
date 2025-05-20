#include <iostream>
using namespace std;
int sum(int ,int );
void g();
int main(){
    cout<<"Enter the value of num1 : ";
    int num1,num2;
    cin>>num1;
    cout<<"Enter the value of num2 : ";
    cin>>num2;
    g();
    cout<<"The sum is : "<<sum(num1,num2);//num1 and num2 are actual parameter .
    return 0;
}
int sum(int a,int b){   //a and b are called formal parameter.
    return a+b;
}
void g(){
    cout<<"Hello Falaous"<<endl;
}