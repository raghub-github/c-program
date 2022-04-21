#include<iostream>
using namespace std;

int add( int a, int b){
    cout<<"Using function with 2 argument"<<endl;
    return a+b;
}

int add( int a, int b, int c){  // function overloding
    cout<<"Using function with 3 argument"<<endl;
    return a+b+c;
}

//  calculate the volume of a cylinder
int volume(double r, int h){
    return (3.14 * r *r *h );
}

//  calculate the volume of a cube
int volume( int h){
    return (h *h *h );
}

int main(){
cout<<"The sum of 5 and 8 is "<<add(5,8)<<endl;
cout<<"The sum of 5 and 9 and 11 is "<<add(5,9,11)<<endl;

cout<<"The volume of a cube of 3cm length  is "<<volume(3)<<endl;
cout<<"The volume of a cylinder of redius 3cm and length 6cm is "<<volume(3,6)<<endl;

return 0;
}