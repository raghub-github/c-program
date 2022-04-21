#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it!= lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}

int main(){
    list<int> list1;  // list of 0 length
    // list<int> list1(5);  // list of 8 length
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(11);
    list1.push_back(52);

    // list<int> :: iterator iter;
    // iter = list1.begin();  // Iterator is a reference of first element of list 
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;

    display(list1);

    return 0;
}