#include <iostream>
using namespace std;

int main(){
    /*what is pointer : pointer is a data type which holds the address of a variable .*/
    int x=10;
    int* y=&x;
    cout<<"the value of y is : "<<y<<endl;
    cout<<"the value of y is : "<<&x<<endl;

    // Derefernce operator :-
    cout<<"The number stored at the address "<<y<<" is "<<*y<<endl;
    
    int** z=&y;
    cout<<*z;
    return 0;
}