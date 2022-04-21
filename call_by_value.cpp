#include<iostream>
using namespace std;

void swap(int a, int b){  // not swaping
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a, int* b){  // swaping by pointer reference
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference(int &a, int &b){  // swaping by reference variable
    int temp = a;
    a = b;
    b = temp;
}

int main(){
int a = 4, b = 6;
cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
// swap(a,b); // not swaping , because it's just send the copy of a and b
// swapPointer(&a, &b);  // This will swap a and b using pointer reference
swapReference(a, b);  // This will swap a and b using reference vriable
cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
return 0;
}