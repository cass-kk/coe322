#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){

  //optimal!!!
  //probs the first hw
  bool divisible3 = (input%3 == 0);
  bool divisible5 = (input%5 == 0);

  if(divisible3 && divisible5)
    cout << "Fizzbuzz!" << endl;
  else if(divisible3)
    cout << "Fizz!" << endl;
  else if(divisible5)
    cout << "Buzz!" << endl;

  return 0;
};
