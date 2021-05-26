#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;


class LinearFunction{
private:
  double p1,p2;
public:
  Point(double in_p1; double in_p2){
    p1 = in_p1; p2 = in_p2;
  };

  float evaluate_at(float x);

  };


  int main(){
    LinearFunction line(p1,p2);
    cout << "Value at 4.0:" << line.evaluate_at(4.0) << endl;
    return 0;
  }
