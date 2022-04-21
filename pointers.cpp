#include<iostream>
using namespace std;

int main(){
// what is pointer ? ----> Data which is hold the address of other data types
int a = 3;
int* b = &a;
cout<<"The address of a is "<<b<<endl;  // print the address of(&) a
cout<<"The address of a is "<<&a<<endl;  // same 

cout<<"The value at address b is "<<*b<<endl;  // Address of b

// pointer to pointer
int** c = &b;
cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;
cout<<"The value at address c is "<<*c<<endl;
cout<<"The value at address value at(value at c is) "<<**c<<endl;
return 0;
}