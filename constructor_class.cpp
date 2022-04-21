#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:

    Complex(int , int); // constructor declaration
    void printNumber(void)
    {
        cout << "Your complex formate number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main(){

// Implicit call
Complex c1(4, 5);

// Explicit call
Complex c2 = Complex(8,6);

c1.printNumber();
c2.printNumber();

return 0;
}