#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculaor{
    double a, b;
    public :
        void getdata(){
            cout<<"Enter the value of a "<<endl;
            cin>>a;
            cout<<"Enter the value of b "<<endl;
            cin>>b;
        }

        void performOparation(){
            cout<<"The value of a+b is : "<<a+b<<endl;
            cout<<"The value of a-b is : "<<a-b<<endl;
            cout<<"The value of a*b is : "<<a*b<<endl;
            cout<<"The value of a/b is : "<<(a/b)<<endl;
        }
};

class scientificCalculaor{
    int a, b;
    public :
        void getdataSimple(){
            cout<<"Enter the value of a "<<endl;
            cin>>a;
            cout<<"Enter the value of b "<<endl;
            cin>>b;
        }

        void performOparationScientific(){
            cout<<"The value of cos(a) is : "<<cos(a)<<endl;
            cout<<"The value of sin(a) is : "<<sin(a)<<endl;
            cout<<"The value of exp(b) is : "<<exp(b)<<endl;
            cout<<"The value of log(b) is : "<<log(b)<<endl;
        }
};

class hybridCalculator : public simpleCalculaor, public scientificCalculaor{

};

int main(){
    // simpleCalculaor calc;
    // scientificCalculaor calc;
    // calc.getdata();
    // calc.performOparation();
    hybridCalculator calc;
    calc.getdata();
    calc.getdataSimple();
    calc.performOparation();
    calc.performOparationScientific();
return 0;
}