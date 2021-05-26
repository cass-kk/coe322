#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;


class Point{
private:
  double x,y;
public:
  Point(double in_x; double in_y){
    x = in_x; y = in_y;
  };
  /* Point(double x, double y)
     : x(x), y(y)
  */
  double distance(){
    return sqrt(x*x + y*y);};
  double angle(){
    return atan(y/x);};
  double distance1(Point other){
    double dx= x-other.x, dy = y-other.y;
    return sqrt(dx*dx + dy*dy);};

  double halfway_point(Point other){
    double hx = (x+other.x)/2., hy = (y+other.y)/.2;
    return Point(hx,hy; };

};


int main(){
  Point p(1.,2.);
  cout << "distance is " << p.distance() << endl;
  cout << "angle is " << p.angle() << endl;
  Point q(5.6, 6.7);
  cout << "distance 1 is " << p.distance1(q) << endl;

  Point p(1,1), q(3,3);
  Point h = p.halfway(q);

  return 0;
}
  /*check repository files*/
