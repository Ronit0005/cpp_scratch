#include <iostream>
using namespace std;
#include <algorithm>
// function object : function wrapped in a class , to use it like a object .(functor)
int main(){
    int arr[]={10,2,3,4,5};
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}