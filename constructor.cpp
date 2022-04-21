#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with the same name as of the class .
    // It is used to initialize the object of it's class
    // it is automatically invoked whenever an object is created

    Complex(void); // constructor declaration
    void printNumber(void)
    {
        cout << "Your complex formate number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{
    a = 10;
    b = 0;
}

int main()
{

    Complex c;
    c.printNumber();

    return 0;
}