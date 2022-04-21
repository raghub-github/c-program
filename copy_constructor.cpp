#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    // When no copy constructor is found, compiler supplies it's own copy constructor
    Number(Number &obj)
    { // copy constructor called
        cout << "copy constructor called" << endl;
        a = obj.a;
    }

    Number(int num)
    {
        a = num;
    }

    void display(void)
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{

    Number x, y, z(55), z2;
    x.display();
    y.display();
    z.display();

    //  copy constructor condition : the object(z1) should exactly resamble z or x or y

    Number z1(x); // copy contructor invoked
    z1.display();

    z2 = z; // copy contructor not invoked
    z2.display();

    Number z3 = z; // copy contructor invoked
    z3.display();

    return 0;
}