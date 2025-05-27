#include <iostream>
using namespace std;
class A{
    int b;
    int a;
    public:
        A(int i,int j):b(i),a(j+b){
            cout<<"Constructor Executed"<<endl;
            cout<<"A: "<<a<<endl;
            cout<<"B :"<<b<<endl;
        }
};
int main(){
    A ob(10,100);
    return 0;
}