#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


int main(){

  int ichar;
  cout << "the manieth character?" << endl;
  cin >> ichar;

  char chari = ichar + 'a'-1;
  // char chari = ichar + 96; // input of int = 1 will print 'a or A (which ever is 97 in ascii)'
  cout << "the " << ichar << " -th char is "<<
  cout << chari << endl;



  return 0;
}
