#include <iostream>
using namespace std;

int sum_squares(int n){

  if (n == 1){
    return 1;
  }else{
    return (n*n + sum_squares(n-1));
  }
}


int main(){
  int x;
  cin >> x;
  int y = sum_squares(x);
  cout << y << endl;
  return 0;
}
