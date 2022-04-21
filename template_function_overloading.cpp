#include<iostream>
using namespace std;

template <class T>
class harry{
    public:
        int data;
       harry(T a){
           data = a;
        } 
        void display();
};

template <class T>
 void harry<T> :: display(){
            cout<<data<<endl;
        }

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){
    // harry <int> h(5);
    // cout<<h.data<<endl;;
    // h.display();

    func(4); // Exact match takes the highest priority
    func<int> (5);
    return 0;
}