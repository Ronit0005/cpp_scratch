// #include <iostream>
// using namespace std;
// class Employee{
//     int id,salary;
//     public:
//         void setId(){
//             salary=1000;
//             cout<<"Enter the Id of employee ";
//             cin>>id;
//         }
//         void getId(){
//             cout<<"Id of the employee : "<<id<<endl;
//         }
// };
// int main(){
//     Employee fb[4];
//     for(int i=0;i<4;i++){
//         fb[i].setId();
//         fb[i].getId();
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void setData(int v1,int v2){
            a=v1;
            b=v2;
        }
        void setDataBySum(complex o1,complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void display(){
            cout<<"Number : "<<a<<"i+"<<b<<endl;

        }

};
int main(){
    complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);
    c3.setData(5,6);
    c1.setDataBySum(c2,c3);
    c1.display();
    return 0;
}