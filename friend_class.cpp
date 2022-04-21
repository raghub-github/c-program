#include <iostream>
using namespace std;

class complex; // forword declaration

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex); // only declaration
    int sumCompComplex(complex, complex); // only declaration
};

class complex
{
    int a, b;
    //  Individually declaring function as friend
    // friend int Calculator :: sumRealComplex(complex o1, complex o2);
    // friend int Calculator :: sumCompComplex(complex o1, complex o2);
    //  Aliter : Declaring the entire calculator class as fiend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    complex o1, o2;
    o1.setNumber(2, 3);
    o2.setNumber(5, 7);
    Calculator cal;
    int res = cal.sumRealComplex(o1, o2);
    int resc = cal.sumCompComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;

    return 0;
}