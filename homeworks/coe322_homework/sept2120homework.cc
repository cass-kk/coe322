#include <iostream>
using namespace std;

void test_if_prime(int how_many){

  int manyCounter = 0;
  bool stoptest = 0;

  for(int i = 2; !stoptest; i++){
    bool isprime = true;
    for(int j = (i - 1); j>= 2; j--){
      if(i % j == 0){
	isprime = false;
      }
    }
    if(isprime) {
      cout << i << endl;
      manyCounter++;
    }
    if(manyCounter == how_many){
      break;
    }
  }
}

int main(){
  int n;
  cin >> n;
  test_if_prime(n);
  return 0;
}
