#include <iostream>
using namespace std;
class Employee{
    int id;
    static int counter ;
    public:
    void setData(int idd){
        id=idd;
        counter++;
    }
    void displayData(){
        cout<<"The id of the employee is : "<<id<<endl;
        cout<<"Counter : "<<counter<<endl;
    }
    static void getCounter(){
        cout<<"The counter is : "<<counter;
    }
};
int Employee::counter;
int main(){
    Employee ronny;
    ronny.setData(101);
    ronny.displayData();
    Employee::getCounter();
    Employee harry;
    harry.setData(102);
    harry.displayData();
    Employee::getCounter();
    return 0;
}