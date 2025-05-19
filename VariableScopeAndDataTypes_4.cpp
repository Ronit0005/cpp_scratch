#include <iostream>
using namespace std;
int glo=6;
void sum(){
    cout<<"Glo in sum is : "<<glo<<endl;
}
int main(){
    int a =4;
    int b =5;
    float pi=4.4;
    double x=19.003;
    char chr ='A';
    bool c =true;
    bool d =false;
    if (c==true){
        cout<<"Yes"<<endl;
    }
    sum();
    cout<<"Glo in the main is : "<<glo<<endl;
    int glo =10;
    cout<<"Glo in the main is : "<<glo<<endl;
    sum();
    return 0;
    // The cantrol asks whether there is local variable with name glo , if not lets us execute the global variable .
}