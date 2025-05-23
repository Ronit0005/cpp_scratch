#include <iostream>
using namespace std;
// In declaration of an object , we need to supply only the data type , not the variable name .
class Complex{
    int a,b;
    public:
        Complex(int,int);
        void display(){
            cout<<"A : "<<a<<endl;
            cout<<"B : "<<b<<endl;
        }
};
Complex::Complex(int x,int y){
    a=x;
    b=y;
}
int main(){
    Complex c(10,20);
    Complex c2=Complex(30,40);
    c.display();
    c2.display();
    return 0;
}