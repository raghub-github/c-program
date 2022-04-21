#include<iostream>
using namespace std;

int sum(int a, int b);  // this is function prototype
void g(void);  // prototype

int main(){
int a,b;
cout<<"Enter the first number"<<endl;
cin>>a;
cout<<"Enter the second number"<<endl;
cin>>b;
cout<<"The sum of two number is "<<sum(a,b)<<endl;

g();

return 0;
}

int sum(int a, int b){
int c = a+b;
return c;
}

void g(){
    cout<<"Hello, Good Morning";
}