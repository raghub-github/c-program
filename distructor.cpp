#include <iostream>
using namespace std;

// Distructor never takes an argument nor does it return any value

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~num()
    { // Distructor
        cout << "This is the time when my distructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{

    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating to more objects" << endl;
        num n2, n3; // Those object will destroy when the block will exicuteed
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}