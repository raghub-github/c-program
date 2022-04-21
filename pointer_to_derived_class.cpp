#include<iostream>
using namespace std;

class baseClass{
    public :
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
        }

};

class derivedClass : public baseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    baseClass * base_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_pointer = & obj_derived;   // Pointing base class to derived class
    
    base_pointer->var_base = 54;
    // base_pointer-> var_derived = 142;  // will throw an error
    base_pointer->display();

    derivedClass * derived_pointer;
    derived_pointer = & obj_derived;
    derived_pointer ->var_base = 905;
    derived_pointer ->var_derived = 95;
    derived_pointer->display();
    return 0;
}