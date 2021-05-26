#include <iostream>
#include <cmath>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int compute_L2norm (vector<float> &x){
  int sum = 0;
  for (int i = 0; i < x.size(); i++){
    int square = pow(x.at(i), 2);
    sum = sum +square;
  }
  int v = sqrt(sum);
  return v;
}


int main(){
  vector<float> x = {3, 5, 9, 8, 7};
  /*  for(auto v : x){
    int sum = 0;
    for (int i = 0; i < x.size(); i++){
      int square = pow((x.at(i)),2);
      sum = sum + square;
    }
    v = sqrt(sum);
    cout << v << endl;
  }
  */
  cout << compute_L2norm(vector<float> x) << endl; // need to fix the function input/vector call
  return 0;
}


/*
float sumsquares = 0;
float l2norm = 0;
for (auto e: numbers){
sumsquares += e*e;
}
12norm = sqrt(sumsquares);
cout << "l2norm: " << l2norm << endl;





*/
