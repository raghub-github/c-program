#include<iostream>
using namespace std;

int main(){
    // Basic example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // New operator
    int *p = new int(40);
    cout <<"The value at address p is "<<*(p)<<endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete operatot
    int *arr1 = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr1;
    cout<<"The value of arr1[0] is "<<arr1[0]<<endl;
    cout<<"The value of arr1[1] is "<<arr1[1]<<endl;
    cout<<"The value of arr1[2] is "<<arr1[2]<<endl;
return 0;
}