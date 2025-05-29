// #include <iostream>
// using namespace std;
// template <class T>
// class Complex{
//     T real;
//     T imaginary;
//     public:
//         Complex(T a,T b){
//             real=a;
//             imaginary=b;
//         }
//         void sumComplex(Complex num2){
//             T r=num2.real+this->real;
//             T i=num2.imaginary+this->imaginary;
//             cout<<"Sum of complex number : "<<"("<<this->real<<"+"<<this->imaginary<<"i)"
//             <<" and "<<"("<<num2.real<<"+"<<num2.imaginary<<"i)"<<" is "<<
//             "("<<r<<"+"<<i<<"i)";
//         }
// };
// int main(){
//     Complex<double> num1(1.0,3.4);
//     Complex<double> num2(1.9,4.5);
//     num2.sumComplex(num1);
//     return 0;
// }

#include <iostream>
using namespace std;
template <class t1,class t2,class t3>
class Calc{
    public:
        t1 num1;
        t2 num2;
        t3 num3;
        Calc(t1 a,t2 b,t3 c){
            num1=a;
            num2=b;
            num3=c;
        }
        void product(){
            cout<<"Product : "<<num1*num2*num3<<endl;
        }
        void sum(){
            cout<<"Sum : "<<num1+num2+num3<<endl;
        }
};
int main(){
    Calc<int,float,double> num1(10,3,60);
    num1.sum();
    num1.product();
    Calc<int,float,int> num2(1,3,6);
    num2.sum();
    num2.product();
    return 0;
}