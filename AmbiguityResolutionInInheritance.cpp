// AMBIGUITY 1

// #include <iostream>
// using namespace std;

// class Base1{
//     int data1;
//     public:
//         void greet(){
//             cout<<"I am method of base 1\n";
//         }
// };
// class Base2{
//     int data2;
//     public:
//         void greet(){
//             cout<<"I am method of base 2\n";
//         }
// };
// class Derived:public Base1,public Base2{
//     int data3 ;
//     public:
//     void greet(){
//         Base1::greet();
//     }
// };
// int main(){
//     Derived obj;
//     obj.greet();
//     return 0;
// }

// AMBIGUITY 2
#include <iostream>
using namespace std;

class B{
    public:
        void say(){
            cout<<"Hello I am base class \n";
        }
};
class D:public B{
    public:
        void say(){
            cout<<"Hello I am derived class \n";
        }
};

int main(){
    D obj;
    obj.say();
    return 0;
}