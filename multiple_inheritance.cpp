#include <iostream>
using namespace std;

// syntex for inheriting in multiple inheritance
// class Derived: visibility-mode base1, visibility-mode base2
// {
//     class body of class "DerivedC"
// };

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The sum of the value of base1 and base2 is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived harry;
    harry.set_base1int(55);
    harry.set_base2int(74);
    harry.show();
    
    return 0;
}