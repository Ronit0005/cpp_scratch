/*#include <iostream>
using namespace std;

class Y;  // Forward Declaration .

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend int sumObject(X o1, Y o2);
};
class Y
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend int sumObject(X o1, Y o2);
};
int sumObject(X o1, Y o2)
{
    return o1.data + o2.data;
}
int main()
{
    X num1;
    Y num2;
    num1.setValue(10);
    num2.setValue(20);
    cout << "The sum of objects are : " << sumObject(num1, num2);
    return 0;
}*/


#include <iostream>
using namespace std;
class c2;
class c1{
    int val1;
    public:
        void setData(int a){
            val1=a;
        }
        void display(){
            cout<<"Val 1 : "<<val1<<endl;
        }
    friend void exchange(c1 &,c2 &);
};
class c2{
    int val2;
    public:
    friend void exchange(c1&,c2&);    
        void setData(int a){
            val2=a;
        }
        void display(){
            cout<<"Val 2 : "<<val2<<endl;
        }
};
void exchange(c1 &o1,c2 &o2){
    int temp;
    temp = o1.val1;
    o1.val1=o2.val2;
    o2.val2=temp;
}
int main(){
    c1 ob1;
    c2 ob2;
    ob1.setData(10);
    ob2.setData(20);
    exchange(ob1,ob2);
    ob1.display();
    ob2.display();
    return 0;
}