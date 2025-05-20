// #include <iostream>
// using namespace std;
// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=10,b=20;
//     cout<<"The value of a is "<<a<<" the value of b is "<<b<<endl;
//     swap(a,b);
//     cout<<"The value of a is "<<a<<" the value of b is "<<b<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
void swap(int* a , int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
     int a=10,b=20;
    cout<<"The value of a is "<<a<<" the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"The value of a is "<<a<<" the value of b is "<<b<<endl;
    return 0;
}