#include <iostream>
using namespace std;
#include <cmath>;

double distance (double x, double y){
  double dist = sqrt(x*x + y*y);
  return dist;
}


int main(){
  cout << distance(1,0) << endl;
  cout << distance(0,1) << endl;
  cout << distance(1,1) << endl;
  cout << distance(3,4) << endl;
  double x,y;
  cout << "Enter x: " ;
  cin >> x;
  cout << "Enter y: ";
  cin >> y;
  result = distance (x,y)
    cout << "distance to origin from point (" << x << "," << y << ") is " << result << endl; 
 return 0;
}
