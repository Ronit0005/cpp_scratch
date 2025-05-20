#include <iostream>
using namespace std;
// In c++ , arrays are data type that stores data in contiguous memory location .
int main(){
    // int marks[4]={1,2,3,4};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    int marks[5];
    marks[0]=987;
    marks[1]=789;
    marks[2]=567;
    marks[3]=345;
    marks[4]=123;
    for(int i=0;i<4;i++){
        cout<<marks[i]<<endl;
    }

    cout<<marks<<endl;
    cout<<&marks[0]<<endl;
    cout<<marks+1<<endl;
    cout<<&marks[1]<<endl;
    cout<<*(marks+1)<<endl;

    int* p=marks;
    cout<<p<<endl;
    return 0;
}