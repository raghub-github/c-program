#include<iostream>
using namespace std;
/*
Syntex for initialization list in constructor:
constructor (argument list) : initialization-section
{
        assignment + other code;
}

example:

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){costructor body}
};

*/

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(a+j)
        Test(int i, int j) : b(j), a(i+b)  // RED flag this will create broblems because a will be initialized first
        {
            cout<<"contrutor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};

int main(){
    Test t(4,8);

return 0;
}