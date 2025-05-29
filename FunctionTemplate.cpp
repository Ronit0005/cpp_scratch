#include <iostream>
using namespace std;
template <class t1,class t2>
float avgNum(t1 a,t2 b){
    return (a+b)/2.0;
}
// can apply it only on parameters not return type 
int main(){
    float x= avgNum(10,20);
    printf("The value of x is %.3f",x);
    return 0;
}