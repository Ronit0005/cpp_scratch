// #include <iostream>
// using namespace std;
// class Base{
//     public:
//         Base(){
//             cout<<"I am base class "<<endl;
//         }
//         void getAdd(){
//             cout<<":";
//         }
// };
// class Derived :public Base{
//     public:
//         Derived(){
//             cout<<"I am derived class "<<endl;
//         }
//         void getAdd(){
//             cout<<"I am derived class"<<endl;
//         }
// };
// int main(){
//     Derived obj;
//     obj.getAdd();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Base{
//     public:
//         Base(){
//             cout<<"I am base class constructor"<<endl;
//         }
//         virtual void getData(){
//             cout<<"Shit"<<endl;
//         }
// };
// class Derived:public Base{
//     public:
//     Derived(){
//         cout<<"I am derived class constructor"<<endl;
//     }
//     void getData(){
//         cout<<"I am derived class getData "<<endl;
//     }
// };
// int main(){
//     Derived ob;
//     ob.getData();  
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Complex;
// class Calculator{
//     public:
//         int add(int a,int b){
//             return a+b;
//         }
//         int ComplexSum(Complex,Complex);
// };
// class Complex{
//     int a,b;
//     public:
//         void setData(int a,int b){
//             this->a=a;
//             this->b=b;
//         }
//         friend int Calculator::ComplexSum(Complex x,Complex y);
//         void printNumber(){
//             cout<<a<<"+"<<b<<"i"<<endl;
//         }
// };
// int Calculator::ComplexSum(Complex x,Complex y){
//             return (x.a+y.a,x.b+y.b);
            
//         }
// int main(){
//     Complex c1,c2;
//     c1.setData(1,2);
//     c2.setData(10,1);
//     Calculator c;
//     cout<<c.ComplexSum(c1,c2);
//     return 0;
// }

#include <iostream>
using namespace std;
class Base{
    int a;int b;
    public:
        Base(){
            cout<<"I am base class constructor "<<endl;
        }
        Base(int a){
            cout<<"I am base class parameterized constructor"<<endl;
        }
};
int main(){
    Base* ptr;
    Base* pt;
    ptr = new Base ;
    pt = new Base(10);
    return 0;
}