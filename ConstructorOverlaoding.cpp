#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int a, int b)
    {
        cout << "This is a parameterized constructor" << endl;
    }
    Complex()
    {
        cout << "This is a default constructor" << endl;
    }
};
int main()
{
    Complex c1;
    Complex c2 = Complex(1, 2);
    return 0;
}