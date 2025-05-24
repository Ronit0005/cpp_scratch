#include <iostream>
using namespace std;

// Classes are custom data type .

// Constructor are special member function with the same name as class .
// It is automatically invoked when ever a object is called .
// They should be declared in public section .
// They donot have return type (not even void).
// We cannot refer to there address .

class Complex
{
    int a, b;

public:
    Complex();
    void display()
    {
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
    }
};

Complex::Complex()
{
    a = 10;
    b = 20;
}

int main()
{
    Complex num;
    num.display();

    return 0;
}