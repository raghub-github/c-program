#include<iostream>
#include<math.h>
using namespace std;

class calculator{
    protected:
        int a, b;
    public:
        void sum(int a, int b){
            cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
        }
        void substaction(int a, int b){
            cout<<"The substaction of "<<a<<" and "<<b<<" is: "<<a-b<<endl;
        }
        void multiplication(int a, int b){
            cout<<"The multiplication of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
        }
        void divition(int a, int b){
            cout<<"The divition of "<<a<<" and "<<b<<" is: "<<a/b<<endl;
        }
};

class sciCalculator : public calculator{
    protected:
        int x;
    public:
        void sinValue(int x){
            cout<<"The sin value of "<<x<<" is: "<<sin(x)<<endl;
        } 
        void tanValue(int x){
            cout<<"The tan value of "<<x<<" is: "<<tan(x)<<endl;
        }
        void logValue(int x){
            cout<<"The log value of "<<x<<" is: "<<log(x)<<endl;
        }     
};

int main(){
    sciCalculator sc;
    sc.sum(5,8);
    sc.substaction(7,5);
    sc.multiplication(1,1);
    sc.divition(0,1);
    sc.sinValue(1);
    sc.tanValue(3);
    sc.logValue(0);
    return 0;
}