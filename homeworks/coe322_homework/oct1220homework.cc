#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Goldbach{
private:
  int x;
public:
  Goldbach(int in_n) : x(in_n) {};
  bool test_if_prime(int a){
    for (int i = 2; i < a; i++){
      if(a == 2){
	return false; 
      } else if (a % i == 0){
	return false;
      }
    }
    return true;
  }
  void subtraction(int x){
    int q;
    for (int i = 4; i <= x; i++){
      if(i % 2 == 0){
	for (int j = 2; j < i; j++){
	  if (test_if_prime(j) == true){
	    q = i - j;
	    if (test_if_prime(q) == true){
	      cout << "the number " << i << " is " << j << " + " << q << endl;
	    }
	  }
	  if(test_if_prime(q) == true){break;}
	}
      }
    }
  }
};

int main (){
  int n;
  cin >> n;
  Goldbach test(n);
  test.subtraction(n);
  return 0;
}
