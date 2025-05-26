#include <iostream>
using namespace std;
class Grandfather{
    protected:
        int data1;
    public:
        Grandfather(){
            cout<<"I am constructor of grandfather class\n";
        }
        void setData1(int num){
            data1=num;
            cout<<"Data 1: "<<data1<<endl;
        }

};
class Father:public Grandfather{
    protected:
        int data2;
    public:
        Father(){
            cout<<"I am constructor of father class \n";
        }
        void setData2(int num){
            data2=num;
            cout<<"Data 2: "<<data2<<endl;
        }
};
class Child:public Father{
    protected:
        int data3;
    public:
        Child(){
            cout<<"I am constructor of child class \n";
        }
        void setData3(int num){
            data3=num;
            cout<<"Data 3: "<<data3<<endl;
        }
};
int main(){
    Child obj;
    obj.setData1(100);
    obj.setData2(200);
    obj.setData3(300);

    return 0;
}