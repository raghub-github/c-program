#include<iostream>
using namespace std;

/*
Inheritance:
student --> test [Done]
student --> sports [Done]
test --> result[Done]
sports --> result[Done]
*/

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        } 
        void print_number(void){
            cout<<"Your Roll number is "<<roll_no<<endl;
        }   
};

class test : virtual public student{
    protected:
        float math, physics;
        public:
            void set_marks(float m1, float m2){
                math = m1;
                physics = m2;
            }
            void print_marks(void){
                cout<<"Your result is here : "<<endl
                <<" Maths : "<<math<<endl
                <<" Physics : "<<physics<<endl;
            }
};

class sports : virtual public student{  // virtual key word is useed for avoid the ambiguity
    protected:
      float score;
      public:
        void set_score(float sc){
            score = sc;
        } 
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        } 
};

class result : public test, public sports{
    private :
        float total;
    public : 
        void display(void){
            total = math + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is : "<<total<<endl;
        }    
};

int main(){
    result res;
    res.set_marks(77.2,81.4);
    res.set_number(557);
    res.set_score(8);
    res.display();
return 0;
}