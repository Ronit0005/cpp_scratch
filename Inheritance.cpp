#include <iostream>
using namespace std;

class Employee{ // Base class 
    float salary; 
    public:
    int id;
        Employee(int n){
            id=n;
            salary=150;
        }
        Employee(){}
        void display(){
            cout<<"Id : "<<id<<endl<<"Salary : "<<salary<<endl;
        }
};
// Derived class .
// Default visibility mode is private .
// In private visibilty mode : The public member of base class becomes the private member  of the derived class .
// Private methods of base class is not inherited .

class Progammer:public Employee{
    int languageCode = 9;
    public:
        Progammer(int inpId){
        id = inpId;
    }
    void getData(){
        cout<<"Id : "<<id;
        
    }
};
int main(){
    Employee ronit(1),harry(2);
    ronit.display();
    harry.display();
    Progammer ronny(3);
    ronny.display();
    ronny.getData();
    cout<<ronny.id;
   // cout<<ronny.salary;
    return 0;
}