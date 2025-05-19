#include <iostream>
using namespace std;

int main(){
    // break statement:
    // for(int i=0;i<10;i++){
    //     if(i==6){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    // contiue statement:
    for(int i=0;i<=10;i++){
        if(i==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}