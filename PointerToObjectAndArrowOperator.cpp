#include <iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
    Complex(int a,int b){
        cout<<"Hello moto"<<endl;
    }
        void setData(int x,int y){
            real=x;
            imaginary=y;
        }
        void getData(){
            cout<<"Number : ("<<real<<"+"<<imaginary<<"i)"<<endl;
        }
};
int main(){
    // Complex num;
    // Complex* ptr=&num;
    // Complex *ptr = new Complex; 
    // // (*ptr).setData(1,5);  
    // ptr->setData(10,11);
    // (*ptr).getData();  
    return 0;
}