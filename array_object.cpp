#include<iostream>
using namespace std;

class Employee {
    int id;
    int salary;
    public:
        void setId(void){
            salary = 1445;
            cout<<"Enter the Id of employee "<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"The id of the employee is "<<id<<endl;
        }
};

int main(){

// Employee harry,lovesh,shruti;
// harry.setId();
// harry.getId();
Employee fb[4];  //  if the employee number is very high then we can apply this method without creating object
for (int i = 0; i < 4; i++)
{
    fb[i].setId();
    fb[i].getId();
}

return 0;
}