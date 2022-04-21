#include<iostream>
using namespace std;

// float funcAvarage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAvarage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAvarage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    float a = funcAvarage(4,5);
    printf("The average of these number is %.3f", a);
    return 0;
}