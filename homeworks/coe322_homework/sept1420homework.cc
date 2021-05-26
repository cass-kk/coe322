#include <iostream>
using namespace std;

int main(){
  int N,i,j;
  cin >> N;
  int smallestSum = 100;
  int smallestI =0;
  int smallestJ = 0;
  bool greaterThan = 0;
  for (i = 0; i < 10; i++){
    for (j = 0; j < 10; j++){
      int k = i * j;
      if (k > N){
	cout << i << ", " << j << endl; // for smallest product pair
	greaterThan = 1;
	break;
      }
    }
    if (greaterThan == 1 ){
      break;
    }
  }
  for (i = 0; i < 10; i++){
    for (j = 0; j < 10; j++){
      int k = i * j;
      int sum = i + j;
      if (k > N){
	if (sum < smallestSum) {
	  smallestSum = sum; // for smallest pair sum
	  smallestI = i;
	  smallestJ = j;
	}
      }
    }
  }
  cout << smallestI << ", " << smallestJ << endl;
  return 0;
}
