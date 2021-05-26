#include <iostream>
using namespace std;

void swap_input(int &x, int &y){
  int m = x;
  x = y;
  y = m;
}


int main(){
  int a;
  int b;
  cin >> a;
  cin >> b;
  swap_input(a,b);
  cout << a << ", " << b << endl;
  return 0;
}
