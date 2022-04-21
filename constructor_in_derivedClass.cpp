#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
        base1(int i){
            data1 = i;
            cout<<"Base class constructor called"<<endl;
        }

        void printData1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int i){
            data2 = i;
            cout<<"Base class constructor called"<<endl;
        }

        void printData2(void){
            cout<<"The value of data is "<<data2<<endl;
        }
};

class Derived: public base1, public base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): base1(a), base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }

        void printData(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main(){
    Derived harry(4,8,5,7);
    harry.printData1();
    harry.printData2();
    harry.printData();
    return 0;
}