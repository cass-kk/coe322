#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swapij(int *x, int *y){
  int m = *x;
  *x = *y;
  *y = m;
}


int main(){
  int i=1, j=2;
  swapij(&i,&j);
  cout << "check that i is 2: " << i << endl;
  cout << "check that j is 1: " << j << endl;
  return 0;
};
