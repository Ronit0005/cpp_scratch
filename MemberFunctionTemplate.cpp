// #include <iostream>
// using namespace std;
// template <class t>
// class Number{
//     public:
//         t data1;
//         Number(t data1){
//             this->data1=data1;
//         }
//         t display();
// };
// template <class t>
// t Number<t>::display(){
//     cout<<"The number is "<<data1;
// }
// int main(){
//     Number<float> num(10);
//     num.display();
//     return 0;
// }


#include <iostream>
using namespace std;
int func(int a){
    cout<<"I am the first func "<<endl;
}
template <class t>
t func(t a){
    cout<<"I am the templated func "<<endl;
}
int main(){
    func(56.7);
    return 0;
}