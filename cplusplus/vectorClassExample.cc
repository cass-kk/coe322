#include <iostream>
#include <cmath>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main(){

  vector<int> numbers = {1,-4,2,-6,};
  int num_max = 0;
  for(auto x: numbers){
    int absx = abs(x);
    if(absx > num_max){
      num_max = absx;
    }
  }
  cout << "Max: " << num_max << endl;

  //find location of first negative element in a vector
  int i;
  for(i = 0; i < numbers.size(); i++){
    int x = numbers.at(i);
    if (x < 0){break;}
  }
  cout << "the first negative element is at position " << i << endl;


  return 0;
}
