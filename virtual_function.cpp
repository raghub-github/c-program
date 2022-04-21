#include<iostream>
using namespace std;

class baseClass{
    public :
        int var_base;
        virtual void display(){  // if we decair the function as a virtual then function late execute rather then same other function from dufferent class
            // Thet is called Run time polymorphism
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
    base_pointer = & obj_derived;
    base_pointer-> var_base = 54;
    base_pointer-> display();

    return 0;
}