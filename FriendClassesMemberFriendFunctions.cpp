#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    friend class Calculator;

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
    friend Complex sumComplex(Complex o1, Complex o2);
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int main()
{
    Complex o1,o2;
    o1.setData(1,5);
    o2.setData(4,7);
    Calculator calc;
    int result = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 : "<<result;
    return 0;
}