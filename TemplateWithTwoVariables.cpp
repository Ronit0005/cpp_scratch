#include <iostream>
using namespace std;
template <class T1,class T2>
class MyTemp{
    public:
        T1 data1;
        T2 data2;
        void display(){
            cout<<"Data 1: "<<data1<<endl;
            cout<<"Data 2: "<<data2<<endl;
        }
};
int main(){
    MyTemp<int,char> obj;
    obj.data1=100;
    obj.data2='A';
    obj.display();
    return 0;
}