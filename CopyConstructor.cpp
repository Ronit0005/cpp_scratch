#include <iostream>
using namespace std;
// When no copy constructor is found , compiler creates a copy constructor .
class Number{
    int num;
    public:
        Number(){}
        Number(int nums){
            num=nums;
        }
        Number(Number& obj){
            cout<<"Copy Constructor Called "<<endl;
            num=obj.num;
        }
        void display(){
            cout<<"Number : "<<num<<endl;
        }
};
int main(){
    // Number x,y,z(40);
    // z.display();
    // y.display();
    // x.display();
    // Number z1(z);
    // Number z2(z);
    // z1.display();
    // z2.display();
    // Number num1(100);
    // Number num2;
    // num2=num1;
    // num2.display();
    Number num1,num2;
    num2=num1;
    num1.display();
    num2.display();
    return 0;
}