#include <iostream>
using namespace std;
int c =45;
int main(){
    // int a,b,c;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a;
    // cin>>b;
    // c=a+b;
    // cout<<"The value of c is : "<<c<<endl;
    // cout<<"The global value of c is : "<<::c;  // Slope resolution operator .
    float d=12.32;
    cout<<sizeof(d)<<endl;
    double s =34.567;
    cout<<sizeof(s)<<endl;
    long double dg=78.655;
    cout<<sizeof(dg)<<endl;
    float vari =89.67;
    float &x =vari;
    cout<<int(x);
    return 0;
}