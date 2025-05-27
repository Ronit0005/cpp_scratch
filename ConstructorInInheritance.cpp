#include <iostream>
using namespace std;

class B1{
    public:
        int b1;
        B1(int a,int b){
            cout<<"I am constructor of base 1 class \n";
        }
};
class B2{
    public:
        int b2;
        B2(int a,int b){
            cout<<"I am constructor of base 2 class \n";
            cout<<"A : "<<a<<endl;
            cout<<"B : "<<b<<endl;
        }
};
class Derived:public B2,public B1{
    public:
        int d2;
        Derived(int a,int b,int c,int d):B2(a,b),B1(10,11){
            cout<<"I am constructor of derived class"<<endl;
            cout<<"C : "<<c<<endl;
            cout<<"D : "<<d<<endl;
        }
};
int main(){
    Derived obj(10,11,12,23);

    return 0;
}

/* 
class Derived: public B1,virtual public B2{
}

--> B2 is executed first from B1 (Exception)
*/