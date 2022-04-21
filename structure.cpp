#include<iostream>
using namespace std;

typedef struct emp
{
    /* data */
    string name;
    int id;
    char fevChar;
    float salary;
} ep;  // ep is a typedef . we can use use is by replacing of struct emp when we create an new employee

typedef union money  
{
    /* data */
    // out of three option we can use only one money type
    // because the memory will separate
    int rice;
    char car;
    float pounds;
} mn;


int main(){
    // structure concept ....
// ep rabin;
// ep manas;

// rabin.name = "Rabin Das";
// rabin.id = 21;
// rabin.fevChar = 'k';
// rabin.salary = 882545;

// manas.name = "Manas Das";
// manas.id = 13;
// manas.fevChar = 'b';
// manas.salary = 38856;

// cout<<"name of the employee is "<<rabin.name<<endl;
// cout<<"Rabin's id is "<<rabin.id<<endl;
// cout<<"Rabin's fevChar is "<<rabin.fevChar<<endl;
// cout<<"Rabin's salary is "<<rabin.salary<<endl;

// cout<<"name of the employee is "<<manas.name<<endl;
// cout<<"manas's id is "<<manas.id<<endl;
// cout<<"manas's fevChar is "<<manas.fevChar<<endl;
// cout<<"manas's salary is "<<manas.salary<<endl;

  // union concept ....
mn myRice;
myRice.rice = 11;
myRice.pounds = 41;
// cout<<"weight of my rice is "<<myRice.rice<<endl; // it's print the gervage value , because we can use only once of money type
cout<<"pounds of my rice is "<<myRice.pounds<<endl;  // it's overwrite the first value then print

return 0;
}