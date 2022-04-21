#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int impId)
    {
        id = 1;
        salary = 5200.0;
    }
};

// Derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class membres/methods/etc...
}
Note:
1. Default visibility mode is private
2. Private visibility mode : Public members of the base class becomes privates members of the derived class
3. Private visibility mode : Private members of the base class becomes privates members of the derived class
4. Private members are are never inherited
*/

// Creating a programmer class derived from Employee base class
class Programmer : public Employee
{
public:
    int languagecode;
    Programmer(int impId)
    {
        id = impId;
        languagecode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{

    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(1);
    cout << skillF.languagecode << endl;
    ;
    skillF.getData();

    return 0;
}