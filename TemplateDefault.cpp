#include <iostream>
using namespace std;
template <class t1=int,class t2=char>
class Number{
    public:
        t1 data1;
        t2 data2;
        Number(t1 d1,t2 d2){
            data1=d1;
            data2=d2;
        }
        void display(){
            cout<<"Data 1 : "<<data1<<endl;
            cout<<"Data 2 : "<<data2<<endl;
        }
};
int main(){
    Number<> n1(10,'D');
    n1.display();
    return 0;
}