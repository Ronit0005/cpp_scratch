#include <iostream>
using namespace std;
// this : It is a keyword which points to the object which invokes that member function .
// this : Returns the pointer not the value or reference .
class A{
    int a;
    public:
        A* setData(int a){
            this->a=a;
            return this ;
        }
        void getData(){
            cout<<"A : "<<a<<endl;
        }
};
int main(){
    A obj;
    obj.setData(10)->getData();
    obj.getData();
    return 0;
}