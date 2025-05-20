// #include <iostream>
// using namespace std;
// long long int factorial(int num){
//     if (num==1){
//         return 1;
//     }
//     else{
//         return (num*factorial(num-1));
//     }
// }
// int main(){
//     cout<<"Facorial of 100 is "<<factorial(10);
//     return 0;
// }


#include <iostream>
using namespace std;
int fibonaci(int n){
    if (n==1 || n==2){
        return 1;
    }
    else{
        return fibonaci(n-1)+fibonaci(n-2);
    }
}
/* 4-> fib(3)+fib(2)=2+1=3
fib(3)->fib(2)+fib(1)=1+1=2*/
int main(){
    cout<<"The 4 th number in the series is "<<fibonaci(4);
    return 0;
}