#include<iostream>
using namespace std;

int main(){
 for(int i = 0; i<10; i++){
    cout<<i<<endl;  // it will not print all the value upto 10 because break statement is bellow
    if (i==3)
    {
        /* code */
        break;
    }
    
 }

 for (int i = 0; i < 10; i++)
 {
     /* code */
     cout<<i<<endl;  // printing all the value of i
     if (i==3)  // it will skip the statement
     {
         /* code */
         continue;
     }
     
 }
 
return 0;
}