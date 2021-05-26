#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Point{
private:
  double x;
  double y;
public:
  Point(double in_x, double in_y): x(in_x), y(in_y);};
};

class Rectangle{
protected:
  float w;
  float h;
  float A;
public:
  Rectangle(Point b1, double in_x, double in_y): w(in_x), h(in_y){};

  float area(){
    A = h*w;
    return A;}
  float right edge(){

    return  ;}
  float topedge(){

    return;}
};

class Square: public Rectangle{
private:

public:
  Square(double x): Rectngle(x, x+1) {}

};

int main(){
  Point b1(4,5);
  cout << "rectangle area is " << b1.area << endl;
  cout << "rectangle right edge is " << b1.rightedge << endl;
  cout << "rectangle top edge is " << b1.topedge << endl;

  return 0;
}
