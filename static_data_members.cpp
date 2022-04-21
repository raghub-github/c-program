#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getId(void)
    {
        cout << "The id of the employee is " << id << " and this is employee number " << count << endl;
    }
};

int Employee ::count; // default value is 0 because it's static

int main()
{

    Employee mohit, rohan, dipak;
    mohit.setData();
    mohit.getId();

    rohan.setData();
    rohan.getId();

    dipak.setData();
    dipak.getId();

    return 0;
}