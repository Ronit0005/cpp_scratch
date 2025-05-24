#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getData()
    {
        cout << "Number : " << a << "+" << b << "i" << endl;
    }
    friend Complex sumComplex(Complex o1,Complex o2);
};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setData(o1.a+o2.a,o1.b+o2.b);
    return o3;
}
int main()
{
    Complex c1, c2,sum;
    c1.setData(1, 2);
    c1.getData();
    c2.setData(5, 6);
    c2.getData();
    sum=sumComplex(c1,c2);
    sum.getData();
    return 0;
}

// Properties of friend function :-
/*
1. Not in the scope of the class .
2. since it is not in scope of the class it cannot be called through any object .
3. Can be invoked without any objects .
4. Generally takes object as a argument .
5. Can be declared inside public and private section in the class .
*/