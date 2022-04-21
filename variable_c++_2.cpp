# include<iostream>
using namespace std;

int glo = 99;  // global variable

void glob(){
cout<<"glo value is "<<glo;  // printing the global variable
}

int main(){
    int a = 8;
    int b = 7;
    int glo = 88;  // local variable
    cout<<"first value is "<<a<<"\nsecond value is "<<b <<" \n";
    cout<<"the value of local glo is"<<glo<<"\n";
    glob();
    return 0;
}