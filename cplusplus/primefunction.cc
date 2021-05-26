#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool test_if_prime(int a){
  for (int i = 2; i < a; i++){
    if(a == 2){
      return false;
    }else if (a%i == 0 ){
      return false;
    }
  }
  return true;
}

void manyPrimes(int how_many){
  int manyCounter = 0;
  int i = 2;
  do {
    if(test_if_prime(i)){
      cout << i << endl;
      manyCounter++;
    }
    i++;
  }while(manyCounter < how_many);
}

int main(){
  int n;
  cin >> n;
  manyPrimes(n);
  return 0;
}




/*bool test_if_prime(int x) {
  bool value = 1;
  bool finish = 0;
  for (int i = 2; i < x; i++) {
    bool check(x % i == 0);
    if (check) {
      value = 0;
      finish = 1;
      break;
    }
    if (finish == 1) {
      break;
    }
  }
  return value;
}

int main() {

  bool isprime = test_if_prime(13);
  if (isprime == 1) {
    cout << "entered value is prime" << endl;
  }
  else {
    cout << "entered value is not prime" << endl;
  }
  return 0;
}
*/
