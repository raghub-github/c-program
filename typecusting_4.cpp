#include<iostream>
#include<iomanip>

using namespace std;

int c = 55;  //  It's a global variable, it can not change the value of local variable
int main(){

    // int a,b,c;
    // cout<<"Enter the value of a"<<endl;
    // cin>>a;

    // cout<<"Enter the value of b"<<endl;
    // cin>>b;

    // c=a+b;

    // cout<<"The sum of a+b is : "<<c<<endl;

    // cout<<"The value of global c is "<<::c<<endl;  // "::" this is called scope resolutition oparator, the syntex of print the global variable


    //  float d = 77.231f;
    //  long double e = 77.231L;
    //  cout<<"The size of 77.231 is "<<sizeof(77.231)<<endl;
    //  cout<<"The size of 77.231f is "<<sizeof(77.231f)<<endl;
    //  cout<<"The size of 77.231F is "<<sizeof(77.231F)<<endl;
    //  cout<<"The size of 77.231l is "<<sizeof(77.231l)<<endl;
    //  cout<<"The size of 77.231L is "<<sizeof(77.231L)<<endl;
     

    //  float x=443;
    //  float & y = x;  // Refarence of variable
    //  cout<<x<<endl;
    //  cout<<y<<endl;


    //  const int i = 80;  // "const" key ward is used for constant the value
    //  float j = 53.541;
    //  cout<<"The value of i is "<<i<<endl;
    //  cout<<"The value of i is "<<(float)i<<endl;  // Type custing of a variable

    //  cout<<"The value of j is "<<(float)j<<endl;
    //  cout<<"The value of j is "<<(int)j<<endl;

    //  cout<<"The sum of i+j is : "<<i+(int)j<<endl;


    int p=9, q=88, r=555;
    cout<<"The value of p is : "<<p<<endl;
    cout<<"The value of q is : "<<q<<endl;
    cout<<"The value of r is : "<<r<<endl;

    cout<<"The value of p is with setw : "<<setw(4)<<p<<endl;  // use of <iomainip> hedder filesetw(4)<<
    cout<<"The value of q is with setw : "<<setw(4)<<q<<endl;  // setw use for set the with first
    cout<<"The value of r is with setw : "<<setw(4)<<r<<endl;

    return 0;
}