#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9)  // default argument is here
    {
        data1 = a;
        data2 = b;
    }

    void prtintData();
};

void simple ::prtintData()
{
    cout << "The value of data is " << data1 << " and " << data2 << endl;
}

int main()
{

    simple s(4);
    s.prtintData();

    return 0;
}