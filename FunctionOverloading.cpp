// #include <iostream>
// using namespace std;
// int sum(int a,int b,int c){
//     cout<<"Using the function with 3 argument "<<endl;
//     return a+b+c;
// }
// int sum(int a,int b){
//     cout<<"Using the function with 2 argument "<<endl;
//     return a+b;
// }
// int main(){
//     int a=10,b=20,c=30;
//     cout<<"The sum of "<<a<<" , "<<b<<" and "<<c<<" is "<<sum(a,b,c)<<endl;
//     cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int volume(double radius,int height){ // Volume of cyclinder.
    return (3.14*radius*radius*height);
}
int volume(int length,int breadth,int height){ // Volume of cuboid.
    return (length*breadth*height);
}
int main(){
    cout<<"The volume of the cuboid is "<<volume(10,20,30)<<endl;
    cout<<"The volume of the cyclinder is "<<volume(10,20)<<endl;
    return 0;
}