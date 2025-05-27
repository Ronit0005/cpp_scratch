#include <iostream>
using namespace std;
class Base{
    public:
        int var_base;
        void setBase(int a){
            var_base=a;
        }
        virtual void get(){
            cout<<"I am Base class "<<endl;
            cout<<"Var Base : "<<var_base<<endl;
        }
    };
    class Derived:public Base{
        public:
        int var_derived;
        void setDerived(int a){
            var_derived=a;
        }
        void get(){
            cout<<"I am Derived class "<<endl;
            cout<<"Var Derived : "<<var_derived<<endl;
        }
};
int main(){
    Base* ptr ;
    Derived obj_derived;
    ptr = &obj_derived;
    ptr->var_base=100;
    ptr->get();
    return 0;
}