#include<iostream>
using namespace std;

int main(){
int marks[] = {100,55,36,87,96};

int studentMarks[4] ; 

studentMarks[0] = 44;
studentMarks[1] = 88;
studentMarks[2] = 448;
studentMarks[3] = 404;

cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<marks[4]<<endl;

studentMarks[1] = 720;  // changing the value
cout<<"These are the student marks"<<endl;
// cout<<studentMarks[0]<<endl;
// cout<<studentMarks[1]<<endl;
// cout<<studentMarks[2]<<endl;
// cout<<studentMarks[3]<<endl;

for (int i = 0; i <= 3; i++)
{
    /* code */
    cout<<"The value of students marks "<<i<<" is "<<studentMarks[i]<<endl;
}

return 0;
}