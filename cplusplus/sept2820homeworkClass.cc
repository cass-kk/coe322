#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class primegenerator{
private:
  int how_many_primes_found;
  int last_number_tested;
public:
  


};



bool test_if_prime(int a){
  for(int i = 2; i < a; i++){
    if(a % i == 0){
      return false;
    }
  }
  return true;
}  



int main(){

  int nprimes;
  cin >> nprimes;

  primegenerator sequence;
  while(sequence.number_of_primes_found() < nprimes){
    int number = sequence.nextprime();
    cout << "Number " << number << " is prime" << endl;
  }
  return 0;
}
