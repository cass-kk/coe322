#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct primesequence{
  int number_of_primes_found;
  int last_number_tested;
};

bool test_if_prime(int a){
  for(int i = 2; i < a; i++){
    if(a % i == 0){
      return false;
    }
  }
  return true;
}  

int nextprime(struct primesequence &sequence){
  while(test_if_prime(sequence.last_number_tested) == false){
    sequence.last_number_tested++;
  }
  sequence.number_of_primes_found++;
  return sequence.last_number_tested++;
}

int main(){

  int nprimes;
  cin >> nprimes;

  struct primesequence sequence;
  sequence.number_of_primes_found = 0;
  sequence.last_number_tested = 2;

  while(sequence.number_of_primes_found < nprimes){
    int number = nextprime(sequence);
    cout << "Number " << number << " is prime" << endl;
  }
  return 0;
}
