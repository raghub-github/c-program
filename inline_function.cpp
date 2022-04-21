#include<iostream>
using namespace std;


inline int product(int a, int b){  // inline key word is used to store the data in main function when this function is used many times, then its no need to value of a and b reatedly
  // static int c = 0;  // static key ward is use for initialisation the value only once also the line code execute only one time
  // c = c+1;  // next time this function is run ,the value of c will be retained
    return a*b;
}

float moneyRecived(int curretMoney, float factor=1.04){
    return curretMoney * factor;
}

int main(){

//int a,b;
// cout<<"Enter the value of a and b"<<endl;
// cin>>a>>b;
// cout<<"The product of a and b is "<<product(a,b)<<endl;  // same function are called many times ,so we use inline function
// cout<<"The product of a and b is "<<product(a,b)<<endl;  // if the fuction code is very short then we declare the function as a inline function
// cout<<"The product of a and b is "<<product(a,b)<<endl;  // Therefore no need to send the value repeatedly from main function
// cout<<"The product of a and b is "<<product(a,b)<<endl;  // then it's exciute the very fast
// cout<<"The product of a and b is "<<product(a,b)<<endl;  // but if the function code is long then cannot use this inline keyword
// cout<<"The product of a and b is "<<product(a,b)<<endl;
// cout<<"The product of a and b is "<<product(a,b)<<endl;
// cout<<"The product of a and b is "<<product(a,b)<<endl;
// cout<<"The product of a and b is "<<product(a,b)<<endl;

int money = 100000;
cout<<"If you have "<<money<<" Rs in your bank account, you will recived "<<moneyRecived(money)<< " Rs after one year"<<endl;
cout<<"For VIP: if you have "<<money<<" Rs in your bank account, you will recive "<<moneyRecived(money,1.1)<<" Rs after one year"<<endl;  // 1.1 factor means 10 percent interest
return 0;
}