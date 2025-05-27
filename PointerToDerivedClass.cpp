// #include <iostream>
// using namespace std;
// class Base{
//     public: 
//         int var_base ;
//         void display(){
//             cout<<"I am base class "<<endl;
//             cout<<"Var Base : "<<var_base<<endl;
//         }
// };
// class Derived:public Base{
//     public:
//         int var_derived ;   
//         void display(){
//             cout<<"I am derived class "<<endl;
//             cout<<"Var base : "<<var_base<<endl;
//             cout<<"Var derived : "<<var_derived<<endl;
//         }
// };
// int main(){
//     Base* ptr ;
//     Base obj_base ;
//     Derived obj_derived;
//     ptr = &obj_derived;
//     ptr->var_base=102;
//     // ptr->var_derived=1001;  //throws an error .
//     ptr->display();
//     // Derived* ptr ;
//     // Derived obj;
//     // ptr = &obj;
//     // ptr->var_base=120;
//     // ptr->var_derived=1001;
//     // ptr->display();
//     return 0;
// }

#include <iostream>
using namespace std;
class Base{
    public:
        int var_base;
        void setBase(int a){
            var_base=a;
        }
        void getBase(){
            cout<<"Var Base : "<<var_base<<endl;
        }
};
class Derived:public Base{
    public:
        int var_derived;
        void setDerived(int a){
            var_derived=a;
        }
        void getDerived(){
            cout<<"Var Derived : "<<var_derived<<endl;
        }
};
int main(){
    // Base* ptr ;
    // Base obj_base ;
    // ptr = &obj_base ;
    // ptr->setBase(100);
    // ptr->getBase();
    Derived* ptr ;
    Derived obj_derived;
    ptr = &obj_derived;
    ptr->setBase(100);
    ptr->getBase();
    ptr->setDerived(1000);
    ptr->getDerived();
    return 0;
}