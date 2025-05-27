#include <iostream>
using namespace std;
#include <iomanip>
int main(){
    // int a=10 ;
    // int* addr = &a;
    // cout<<"At address : "<<addr<<" is "<<*addr;
    // int* arr = new int(4);
    // cout<<"Address : "<<arr<<endl;
    // cout<<"Value : "<<*arr<<endl;
    // int* ptr = new int(4);
    // cout<<ptr<<endl;
    // int* arr=new int[3];
    // arr[0]=10;
    // arr[1]=20;
    // arr[2]=30;
    // cout<<arr[0];
    // int* a=new int(4);
    // cout<<*a;
    // int* arr=new int[3];
    // cout<<arr;
    // int* ptr = new int(100);
    // cout<<ptr<<endl;
    // cout<<*ptr;
    int* arr=new int(3);
    *(arr)=10;
    *(arr+1)=100;
    *(arr+2)=1000;
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<setw(4)<<endl;
    }
    return 0;
}