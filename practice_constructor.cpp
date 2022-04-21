#include<iostream>
#include<cmath>
using namespace std;

class point{
  int a, b;
  friend void distance(point, point);
  public:
     point(int x,int y)
     {
         a = x;
         b = y;
     }
     void display(void){
         cout<<"The point is : ("<<a<<","<<b<<")"<<endl;
     }
};

void distance(point p1, point p2){
    int x1 = (p1.a - p2.a)*(p1.a - p2.a);
    int y1 = (p1.b - p2.b)*(p1.b - p2.b);
    double dist = sqrt(x1+y1);
    cout<<"The distance between ("<<p1.a<<","<<p1.b<<") and ("<<p2.a<<","<<p2.b<<") is : "<<dist<<" unit"<<endl;
}

int main(){

point p1(5,6);
p1.display();

point p2(6,8);
p2.display();

distance(p1, p2);

return 0;
}