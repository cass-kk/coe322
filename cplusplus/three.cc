#include <iostream>
using namespace std;
int main(){
  int maybeprime;
  cin >> maybeprime;

  bool isprime{true};
  // determine whether the number is prime
  // for all divisors from 2 to number-1, then it is not a divisor
  // 2 not divisor AND 3 not divisor AND 4 not divisor
  for (int d=2; d<maybeprime; d++){
    bool this_value_is_not_a_divisor = maybeprime%d=0;
    isprime = isprime and this_value_is_not_a_divisor;
    //print out conclusion
 
 // print out the conclusion
  // if (isprime) -> cout -> else -> cout
    if(isprime){
      cout <<"prime" << endl;
    } else{
      cout << "not prime" << endl;
    }
  return 0;
}
