#include <iostream>
using namespace std;
class Base1{
    protected:
        int data1;
    public:
        Base1(){
            cout<<"I am constructor of first class \n";
        }
};
class Base2{
    protected:
        int data2;
    public:
        Base2(){
            cout<<"I am constructor of second class \n";
        }
};
class Derived:public Base2,public Base1{
    protected:
        int data3;
    public:
        Derived(){
            cout<<"I am constructor of derived class \n";
        }
};

int main(){
    Derived obj;
    return 0;
}